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
        int n, m;
        cin>>n>>m;

        int x, y;
        int ans = 4*m;

        cin>>x>>y;
        for(int i=1; i<n; i++){
            cin>>x>>y;
            ans += 2*x + 2*y;
        }
        cout<<ans<<endl;
    }
    return 0;
}