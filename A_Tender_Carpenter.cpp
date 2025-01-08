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
        for(int i=1; i<=n; ++i){
            cin>>a[i];
        }

        int ans = 0;
        for(int i=1; i<n; ++i){
            int minimum = min(a[i], a[i+1]);
            int maximum = max(a[i], a[i+1]);

            if(2*minimum > maximum){
                ans = 1;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}