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
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }

    int k = sum/n;
    for(int i=0; i<n-1; i++){
        if(a[i] < k){
            cout<<"NO"<<endl;
            return;
        }
        a[i+1] += a[i] - k;
        a[i] = k;
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

