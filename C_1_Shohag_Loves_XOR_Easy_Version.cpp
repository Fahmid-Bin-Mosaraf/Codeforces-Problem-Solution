#include <bits/stdc++.h>
using namespace std;
#define ll long long            

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    ll x, m;
    cin>>x>>m;

    int ans = 0;
    for(int i=1; i<=min(2LL*x,m); i++){
        if(x != i && ((x %(x^i)) == 0 || (i%(x^i) == 0))){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast_io();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
