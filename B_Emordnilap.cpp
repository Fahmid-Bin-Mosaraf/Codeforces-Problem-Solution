#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod = 1e9+7;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;

        lli ans = n*(n-1);
        ans %= mod;

        for(int i=1; i<=n; i++){
            ans *= i;
            ans %= mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}