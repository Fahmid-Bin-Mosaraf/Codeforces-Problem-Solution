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

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        sum += a[i];
        
        if(sum%4 == 1){
            int sr = sqrt(sum);
            if(sr*sr == sum){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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
