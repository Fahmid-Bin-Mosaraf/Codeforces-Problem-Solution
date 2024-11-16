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
        int n, a;
        cin>>n;

        vector<int>ans(2*n,0);
        int x = n;
        int y = n;

        for(int i=0; i<n; i++){
            cin>>a;
            if(a < ans[x]){
                ans[--x] = a;
            }
            else{
                ans[y++] = a;
            }
        }

        for(int i=x; i<y; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}