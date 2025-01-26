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
        for(int i= 0; i<n; i++){
            cin>>a[i];
        }

        ll ans = 0;
        for(int i=0; i<n; i++){
            ans += a[i];
        }

        while(true){
            if(a.size() == 1){
                ans = max(ans, (ll)a[0]);
                break;
            }

            vector<ll>b;
            for(int i=0; i<a.size()-1; i++){
                b.push_back(a[i + 1] - a[i]);
            }

            ll sum = 0;
            for(int i=0; i<b.size(); i++){
                sum += b[i];
            }

            if(sum < 0){
                for(int i=0; i<b.size(); i++){
                    b[i] = -b[i];
                }
            }
            ans = max(ans, sum);
            reverse(b.begin(), b.end());
            a = b;
        }
        cout<<ans<<endl;
    }
    return 0;
}