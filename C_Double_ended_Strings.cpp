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
        string a, b;
        cin>>a>>b;

        int n = a.size();
        int m = b.size();
        int ans = 0;
        vector<vector<int>>x(n+1, vector<int>(m+1,0));
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i-1] == b[j-1]){
                    x[i][j] = x[i-1][j-1] + 1;
                    ans = max(ans, x[i][j]);
                }
            }
        }
        cout<<n+m-2*ans<<endl;
    }
    return 0;
}
