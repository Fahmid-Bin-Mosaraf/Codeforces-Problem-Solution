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
        int n;
        cin>>n;

        unordered_map<int, int>mp;
        ll ans = 0;
        
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            x -= i;
            ans += mp[x];  
            mp[x]++;    
        }
        cout<<ans<<endl;
    }
    return 0;
}