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
        ll n, a, b, c;
        cin>>n>>a>>b>>c;

        ll sum = a + b + c;

        ll l = 1;
        ll r = 1e9;
        ll ans = 1e9;

        while(l <= r){
            ll  m = (l+r) / 2;
            ll  x = m/3;
            ll  y = m%3;
            ll distance = x*sum;

            if(y == 1){
                distance += a;
            }
            else if(y == 2){
                distance += a + b;
            }

            if(distance >= n){
                ans = m;
                r = m-1;
            } 
            else{
                l = m+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}