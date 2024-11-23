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
        int n, m;
        cin>>n>>m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == 0 && j == 0){
                    cout<<'W';
                }
                else{
                    cout<<'B';
                }
            }
            cout<<endl;
        }
    }
    return 0;
}