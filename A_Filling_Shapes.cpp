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

    if(n%2 == 0){
        int ans = 1;
        for(int i=0; i<n/2; i++){
            ans *= 2;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

int main(){
    fast_io();
    solve();
    return 0;
}
