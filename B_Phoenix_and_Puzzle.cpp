#include <bits/stdc++.h>
using namespace std;
#define ll long long            

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool ans(int x){
    int sr = sqrt(x);
    return sr*sr == x;
}

void solve(){
    int n;
    cin>>n;

    if(n%2 == 0 && ans(n/2)){
        cout<<"YES"<<endl;
    }
    else if(n%4 == 0 && ans(n/4)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
