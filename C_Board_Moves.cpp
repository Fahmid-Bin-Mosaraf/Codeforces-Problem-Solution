#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll m = n/2;
        ll ans = m*(m+1)*(2*m+1)/6;
        cout<<ans*8<<endl;
    }
    return 0;
}