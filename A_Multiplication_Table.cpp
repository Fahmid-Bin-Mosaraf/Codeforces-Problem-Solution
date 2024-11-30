#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n, x;
    cin>>n>>x;

    ll ans = 0;
    for(int i=1; i<=n; i++){
        if(x%i == 0 && x/i <= n){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}