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

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = 0;
        int x = INT_MAX;
        for(int i=n-1; i>=0; i--){
            if(a[i] > x)
                ans++;
            x = min(x, a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}