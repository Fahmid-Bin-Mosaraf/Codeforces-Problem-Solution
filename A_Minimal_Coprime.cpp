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
        ll l, r;
        cin>>l>>r;

        ll ans = 0;

        if(l <= 1 && r >= 1){
            ans += 1;
        }

        if(r >= 2){
            ll x = max(2ll, l);
            ll y = r-1;
            if(x <= y){
                ans += (y-x+1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}