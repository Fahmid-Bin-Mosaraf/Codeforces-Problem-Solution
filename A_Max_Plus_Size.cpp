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

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int ans = 0, ans1 = 0;
        int count = 0, count1 = 0;

        for(int i=0; i<n; i+=2){
            ans = max(ans,arr[i]);
            count++;
        }

        for(int i=1; i<n; i+=2){
            ans1 = max(ans1,arr[i]);
            count1++;
        }
        ans1 += count1;
        ans += count;
        cout<<max(ans1,ans)<<endl;
    }
    return 0;
}