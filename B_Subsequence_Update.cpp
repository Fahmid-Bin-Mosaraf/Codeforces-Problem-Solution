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

void solve(){
    ll n, l, r;
    cin>>n>>l>>r;

    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<ll> b, c;
    for(int i=0; i<r; i++){
        b.push_back(a[i]);
    }

    for(int i=l-1; i<n; i++){
        c.push_back(a[i]);
    }

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll x = 0;
    ll y = 0;
    for(int i=0; i<r-l+1; i++) {
        x += b[i];
        y += c[i];
    }
    cout<<min(x, y)<<endl;
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
