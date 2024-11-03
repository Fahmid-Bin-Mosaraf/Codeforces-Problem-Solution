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
 
        if(n == 1){
            cout<<1<<endl;
            continue;
        }
        if(n == 2){
            cout<<"2 1"<<endl;
            continue;
        }
    
        vector<int>ans(n, -1);
        ans[n/2] = 1;
        ans[0] = 3;
        ans[n-1] = 2;
    
        int curr = 4;
        for(int i=1; i<=n-1; i++){
            if(ans[i] != -1)continue;
            ans[i] = curr++;
        }
    
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}