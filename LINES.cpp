#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <stack>
#include<set>
#include <math.h>
#define all(c) c.begin(),c.end()
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define DRT() ll test_case; cin>>test_case; while(test_case--)
#define wl(n) while(n--)
#define fr(i,a,b) for(i=a;i<b;i++)
#define rev(i,a,b) for(i=b-1;i>=a;i--)
#define mem(a,i) memset(a,i,sizeof(a))
typedef pair<int,int> ii;
#define mp make_pair
#define ll long long
#define MOD 1000000007
#define pb push_back
#define psh push
#define nl printf("\n")
#define fi first
#define sec second

#define si(n) scanf("%d",&n);

#define ss(s) scanf("%s",s)
#define sc(c) scanf("%c",&c)
#define sf(f) scanf("%lf",&f)
#define sll(s) scanf("%lld",&s)
#define pi(n) printf("%d\n", n)

#define ps(s) printf("%s\n", s)
#define pc(c) printf("%c\n", c)
#define pf(f) printf("%lf\n", f)

int n,p;
vector<pair<ll,ll> >V;
map<double,int>M;
map<double,int>::iterator it;
using namespace std;

int main()
{
	int i,j;
	ll x,y;
	si(n);si(p);
	fr(i,0,n)
	{
		sll(x);sll(y);
		V.pb(mp(x,y));
	}
	if(n==1)
	{
		printf("YES\n");
		return 0;
	}
	M.clear();
	fr(i,0,min(n,300))
	{
		M.clear();
		fr(j,i+1,V.size())
		{
			double px=V[i].first;
			double py=V[i].second;
			double qx=V[j].first;
			double qy=V[j].second;
            double slope=(qy-py)/(qx-px);
            M[slope]++;
		}
		it=M.begin();
		int d=0;
		while(it != M.end())
		{
			d=max(d,it->second+1);
			it++;
		}
		double dd=d*100.0;
    	dd/=n*(1.0);
    	if(dd >= p)
    	{
    		printf("YES\n");
    		return 0;
    	}


	}
	printf("NO\n");
	return 0;
}
