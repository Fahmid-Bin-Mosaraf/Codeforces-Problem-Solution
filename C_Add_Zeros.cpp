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

        vector<pair<ll, int>>a(n+1); 
        for(int i=1; i<=n; i++){ 
            cin>>a[i].first; 
            a[i].first += i-1; 
            a[i].second = i-1; 
        } 
        
        a[1].first = 0; 
        sort(a.begin(),a.end()); 
        map<ll, bool>mp; 
        mp[n] = true; 
        
        for(int i=2; i<=n; i++){ 
            if(mp[a[i].first]) 
            mp[a[i].first + a[i].second] = true; 
        } 
        
        ll ans = 0; 
        for (auto [x,y] : mp){
            if(y){ 
                ans = x;
            }
        }
        cout<<ans<<endl; 
    }
    return 0;
}