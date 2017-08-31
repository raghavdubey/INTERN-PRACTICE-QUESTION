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
using namespace std;
int main()
{
    boost;
    ll n,m,temp,ans,fin_ans;
    set <ll> f;
    DRT()
    {
        fin_ans=0;
        cin>>n>>m;
        ans=m+n;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            f.insert(temp);
        }
        for(ll i=0;i<m;i++)
        {
            cin>>temp;
            f.insert(temp);
        }
        ll s=(f.size());
        fin_ans=ans-s;
        cout<<fin_ans<<endl;
    }
    return 0;
}
//Signature Anmol mishra Team maarlow 
