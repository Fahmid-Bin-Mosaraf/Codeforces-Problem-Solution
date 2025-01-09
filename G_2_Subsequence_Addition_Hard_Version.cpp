#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;

    vector<int>c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    sort(c.begin(), c.end());

    if(c[0] != 1){
        cout<<"NO"<<endl;
        return;
    }

    ll ans = c[0];
    for(int i=1; i<n; i++){
        if(ans < c[i]){
            cout<<"NO"<<endl;
            return;
        }
        ans += c[i];
    }
    cout<<"YES"<<endl;
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
