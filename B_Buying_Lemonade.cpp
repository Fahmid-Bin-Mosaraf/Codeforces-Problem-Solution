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
        ll n, k;
        cin>>n>>k;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        a.push_back(0);
        sort(a.begin(),a.end());

        ll ans = 0;
        ll temp = 0;
        ll count = 1;

        while(temp < k){
            ll x = n-count+1;
            ll y = a[count] - a[count-1];
            ll z = x*y;

            if((temp+z) < k){
                temp += z;
                ans += z+1;
                count++;
            }
            else{
                ans += k-temp;
                temp = k;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}