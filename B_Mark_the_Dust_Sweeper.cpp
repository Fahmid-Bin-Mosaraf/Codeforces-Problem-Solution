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

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int operation = 0;
        ll ans = 0;

        while(operation<n && arr[operation] == 0){
            operation++;
        }
        for(int i=operation; i<n-1; i++){
            ans += arr[i]; 
            if(arr[i] == 0){
                ans++;
            }       
        }
        cout<<ans<<endl;
    }
    return 0;
}