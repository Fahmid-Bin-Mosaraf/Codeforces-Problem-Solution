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

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-2; i++){
        if(0 > a[i]){
            cout<<"NO"<<endl;
            return;
        }
        ll temp = a[i];
        a[i] -= temp;
        a[i+1] -= 2*temp;
        a[i+2] -= temp;
    }

    if(a[n-1] != 0 || a[n-2] != 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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
