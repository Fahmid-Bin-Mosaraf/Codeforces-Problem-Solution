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

        vector<int>a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        int ans = 1e9+7;
        for(int i=1; i<=n; i++){
            int count = 0;
            for(int j=i+1; j<=n; j++){
                count += a[j] > a[i];
            }
            ans = min(ans,count+(i-1));
        }
        cout<<ans<<endl;
    }
    return 0;
}