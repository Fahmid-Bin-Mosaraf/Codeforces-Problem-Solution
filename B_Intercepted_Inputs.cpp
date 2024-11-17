#include <bits/stdc++.h>
using namespace std;
#define ll long long                

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    ll n;
    cin>>n;

    vector<int>a(n);
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    
    ll target = n-2;
    for(ll i=1; i*i<= target; i++){
        if(target%i == 0){
            ll a = i;
            ll b = target/i;
            if (s.count(a) && s.count(b)){
                cout<<a<<" "<<b<<endl;
                return;
            }
        }
    }
    cout<< 1<<" "<<1<<endl;
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
