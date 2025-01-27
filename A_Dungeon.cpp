#include <bits/stdc++.h>
using namespace std;
#define ll long long                  

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    int a, b, c;
    cin>>a>>b>>c;

    int sum = a+b+c;
    if(sum%9 == 0){
        int ans = sum/9;
        if(a >= ans && b >= ans && c >= ans){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
