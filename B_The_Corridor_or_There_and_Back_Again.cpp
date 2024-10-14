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
        int n;
        cin>>n;

        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            int d, s;
            cin>>d>>s;
            ans = min(ans, d + (s-1) / 2);
        }
        cout<<ans<<endl;
    }
    return 0;
}