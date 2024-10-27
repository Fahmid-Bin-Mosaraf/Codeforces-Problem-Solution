#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n, m, r, c;
        cin>>n>>m>>r>>c;
        
        ll ans = 0;
        ans += m-c;
        ans += (n-r) * (m-1);
        ans += (n-r) * m;
        
        cout<<ans<<endl;
    }
    return 0;
}