#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;

        int ans = min(x, y);

        cout<<"0 "<<ans<<" "<<ans<<" 0"<<endl;
        cout<<"0 "<<"0 "<<ans<<" "<<ans<<endl;
    }
    return 0;
}