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
        ll x, y, a, b;
        cin>>x>>y>>a>>b;
 
        b = min(b, 2*a);
 
        ll ans;
        if(x < y){
            swap(x, y);
        }
        ans = y*b+(x-y)*a;
 
        cout<<ans<<endl;
    }
    return 0;
}