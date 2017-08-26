#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int t,a,b;
  double n;
  cin>>t;
  for(int k=0;k<t;k++)
  {
    cin>>n>>a>>b;
    if(b<a)
    swap(a,b);
    long long int alpha=b-a-1;
    long long int beta=n-a-b-2;
    if(alpha!=beta)
    {
      cout<<min(alpha,beta)<<endl;
    }
    else
    {
      cout<<"0"<<endl;
    }

  }
}
