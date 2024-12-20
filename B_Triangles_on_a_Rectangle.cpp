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
        ll w,h;
	    cin>>w>>h;
 
	    ll ans = 0;
        for(int i=0; i<4; i++){
            int k;
            cin>>k;
    
            vector<int>a(k);
            for(int i=0; i<k; i++){
                cin>>a[i];
            }

            ll x = a[k-1] - a[0];
            ll y;

            if(i<2){
                y = h;
            } 
            else{
                y = w;
            }

            ans = max(ans, x * y);
        }
        cout<<ans<<endl;
    }
    return 0;
}