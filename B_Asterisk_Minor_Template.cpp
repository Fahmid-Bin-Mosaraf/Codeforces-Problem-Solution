#include <bits/stdc++.h>
using namespace std;
#define ll long long            

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    string a, b;
    cin>>a>>b;

    int n = a.size(), m = b.size();

    if(a[0] == b[0]){
        cout<<"YES\n";
        cout<<a[0]<<"*\n";
    }
    else if(a[n-1] == b[m-1]){
        cout<<"YES\n";
        cout<<"*"<<a[n-1]<<endl;
    }
    else{
        for(int i=0; i<n-1; i++){
            for(int j=0; j<m-1; j++){
                if(a[i] == b[j] && a[i+1] == b[j+1]){
                    cout<<"YES\n";
                    cout<<"*"<<a[i]<<a[i+1]<<"*\n";
                    return;
                }
            }
        }
        cout<<"NO\n";
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
