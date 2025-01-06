#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        vector<ll>pref(n+1, 0);
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + a[i-1];
        }

        ll ans = 0;
        for(int i=0; i<=k; i++){
            ans = max(ans, pref[n-(k-i)] - pref[2*i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}