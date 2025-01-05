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
        int n;
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll ans = 0;
        ll x = 0;

        for(int i=0; i<n; i++){
            if(a[i] < 0){
                x++;
                a[i] = -a[i];
            }
            ans += a[i];
        }
        sort(a.begin(), a.end());

        if(x & 1){
            ans -= 2*a[0];
        }
        cout<<ans<<endl;
    }
    return 0;
}