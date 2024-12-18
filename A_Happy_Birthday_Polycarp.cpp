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

        int count= 0;
        int ans = 0;

        for(int i=1; i<=9; i++){
            count = count*10+1;
            for(int j=1; j<=9; j++){
                if(count*j <= n){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}