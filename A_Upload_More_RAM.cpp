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
        int n, k;
        cin>>n>>k;

        int ans = n*k;
        ans -= k-1;
        cout<<ans<<endl;
    }
    return 0;
}