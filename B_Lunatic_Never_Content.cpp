#include <bits/stdc++.h>
using namespace std;

#define ll long long            
#define ull unsigned long long  
#define pb push_back             
#define mp make_pair             
#define F first                  
#define S second                 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 

const int MOD = 1e9 + 7;         
const int INF = 1e9;             
const ll LINF = 1e18;             
const double EPS = 1e-9;         

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int gcd(int a, int b){
    while(b){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

void solve(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=0; i<n/2; i++){
        ans = gcd(ans, abs(a[i] - a[n-i-1]));    
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
