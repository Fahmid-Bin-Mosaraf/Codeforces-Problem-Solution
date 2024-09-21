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

        int gold = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(arr[i] >= k){
                gold += arr[i];
            }
            else if(arr[i] == 0 && gold> 0){
                gold--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}