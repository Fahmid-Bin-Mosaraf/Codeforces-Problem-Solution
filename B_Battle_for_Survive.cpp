#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        
        ll ans = 0;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ans += arr[i];
        }
        cout<<ans-2*arr[n-2]<<endl;
    }
    return 0;
}