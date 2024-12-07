#include <bits/stdc++.h>
using namespace std;
#define ll long long            
const int N = 26;   

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int>a(N*2,0);
    int ans = 0;
    
    for(char c : s){
        if('A'<=c && c<='Z'){
            a[c-'A']++;
        }
        else{
            a[N+(c-'a')]++;
        }
    }

    for(int i=0; i<N; i++){
        int minimum1 = min(a[i], a[N+i]);
        ans += minimum1;
        a[i] -= minimum1;
        a[N+i] -= minimum1;
    }

    for(int i=0; i<N; i++){
        int x = a[i] + a[N+i]; 
        int minimum2 = min(k, x/2); 
        ans += minimum2;
        k -= minimum2;
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
