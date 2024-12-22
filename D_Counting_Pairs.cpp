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
        ll n, x, y; 
        cin>>n>>x>>y;
        
        vector<ll>a(n);
        ll sum = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i]; 
        }

        ll temp1 = sum-y;
        ll temp2 = sum-x; 
        sort(a.begin(), a.end());
        
        ll count = 0;
        for(int i=0; i<n-1; i++){
            int l = lower_bound(a.begin()+i+1, a.end(), temp1-a[i]) - a.begin();
            int r = upper_bound(a.begin()+i+1, a.end(), temp2-a[i]) - a.begin();
            count += (r-l);
        }
        cout<<count<<endl;
    }
    return 0;
}