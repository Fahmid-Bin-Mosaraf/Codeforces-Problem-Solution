#include <bits/stdc++.h>
using namespace std;
#define ll long long              

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    int n, k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.rbegin(), a.rend());

    int sum = 0;
    for(int i=0; i<n; i++){
        if(sum+a[i] > k){
            cout<<k-sum<<endl;
            return;
        }
        sum += a[i];
    }
    cout<<k-sum<<endl;
}

int main(){
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
