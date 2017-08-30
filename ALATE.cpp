#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,jj,ii;
	scanf("%d",&t);

	vector <long> v[100001];

	for(ii=1;ii<100001;ii++)
	{
	    for(jj=ii;jj<100001;jj+=ii)
	    v[jj].push_back(ii);
	}

	while(t--)
	{
	   long long int n , q ;
	   scanf("%lld",&n);
	   scanf("%lld",&q);

	   long long int arr[n+1] , sq[n+1] , sum[n+1] , s=0 , i , j , opt , x , y , nsq , ind ;

	   for(i=1;i<=n;i++)
	   {
	       scanf("%lld",&arr[i]);
	       sq[i] = (arr[i]*arr[i]) % 1000000007 ;
	   }

	   for(i=1;i<=n;i++)
	   {
	      s=0;
	      for(j=i;j<=n;j+=i)
	      {
	          s = ( s + sq[j] ) % 1000000007 ;
	      }

	      sum[i] = s ;
	   }

	   while(q--)
	   {
	       scanf("%lld",&opt) ;

	       if(opt == 1)
	       {
	           scanf("%lld",&x) ;
	           printf("%lld\n",sum[x]) ;
	       }
	       else if(opt == 2)
	       {
	           scanf("%lld",&x) ;
	           scanf("%lld",&y) ;

	           nsq = (y*y) % 1000000007 ;

	           for(i=0;i<v[x].size();i++)
	           {

	            sum[v[x][i]] = (sum[v[x][i]] - sq[x] + nsq+1000000007) %1000000007 ;


	           }
	           sq[x] = nsq;

	       }

	   }


	}
	return 0;
}    
