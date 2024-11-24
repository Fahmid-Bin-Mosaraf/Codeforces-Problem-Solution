#include <bits/stdc++.h>
using namespace std;
#define ll long long            

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    string s;
    cin>>s;
    int n = s.size();

    for(int i=0; i+1<n; i++){
        if(s[i] == s[i+1]){
            cout<<s.substr(i, 2)<<endl;
            return;
        }
    }

    for(int i=0; i+2<n; i++){
        if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]){
            cout<<s.substr(i, 3)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
