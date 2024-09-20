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

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());

        int len = 1, ans = 1;
        for(int i=1; i<n; i++){
            if(arr[i]-arr[i-1] <= k){
                len++;
            }
            else{
                ans = max(ans,len);
                len = 1;
            }
        }
        ans = max(ans, len);
        cout<<n-ans<<endl;
    }
    return 0;
}