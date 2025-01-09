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

    string s, t;
    cin>>s>>t;

    int i = 0;
    while(i<s.size() && s[i] == '0'){
        if(t[i] != '0'){
            cout<<"NO"<<endl;
            return;
        }
        i++;
    }
    if(i == s.size() || s[i] != '0'){
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
