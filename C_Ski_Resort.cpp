#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n, k, q;
        cin>>n>>k>>q;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll val = 0;
        ll ans = 0;

        for(int i=0; i<n; i++){
            if(a[i] <= q){
                val++;
                if(i == n-1 || a[i+1] > q){
                    if(val >= k){
                        ll b = val-k+1LL;
                        ll add = (b*(b+1LL))/2LL;
                        ans += add;
                    }
                    val = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}