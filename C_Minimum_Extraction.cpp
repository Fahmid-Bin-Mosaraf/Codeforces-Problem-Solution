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

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        int ans = a[0];
        for(int i=0; i<n-1; i++){
            ans = max(ans, a[i+1]-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}