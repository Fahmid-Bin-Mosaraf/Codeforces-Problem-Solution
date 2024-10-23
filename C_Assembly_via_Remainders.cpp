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

        int ans = 1000;
        cout<<ans<<" "; 

        for(int i=2; i<=n; i++){
            int x;
            cin>>x;
            ans += x;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}