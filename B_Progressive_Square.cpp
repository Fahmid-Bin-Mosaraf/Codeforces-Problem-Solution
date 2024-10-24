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
        int n, c, d;
        cin>>n>>c>>d;

        vector<int>b(n*n);
        for(int i=0; i<n*n; i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());

        vector<int>ans(n*n);
        int min = b[0];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans[i*n+j] = min+i*c+j*d;
            }
        }
        sort(ans.begin(), ans.end());

        if(b == ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}