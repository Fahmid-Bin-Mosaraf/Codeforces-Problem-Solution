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
        int n;
        cin>>n;

        ll ans = 0;
        for(int i=0; i<n; i++){
            ll m;
            cin>>m;

            ans = max(0LL, ans+m);
        }
        cout<<ans<<endl;
    }
    return 0;
}