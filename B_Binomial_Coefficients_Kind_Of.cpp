#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7;
int main()
{
    fast_io;
    ll t;
    cin>>t;

    vector<ll>n(t), k(t);
    for(auto& x : n){
        cin>>x;
    }
    for(auto& x : k){
        cin>>x;
    }
    
    for(int i=0; i<t; i++){
        ll y = 2;
        ll z = k[i];
        ll ans = 1;

        while(z > 0){
            if(z%2 == 1){
                ans = (ans*y) % MOD;
            }
            y = (y*y) % MOD;
            z /= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}