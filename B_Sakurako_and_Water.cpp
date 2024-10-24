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

        vector<vector<int>>a(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        int count = 0;
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(a[i][j] < 0){
                    int ans = -a[i][j];
                    for(int k=0; k<=min(i, j); k++){
                        a[i-k][j-k] += ans;
                    }
                    count += ans;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}