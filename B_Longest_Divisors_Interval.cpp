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
        lli n;
        cin>>n;

        int ans;
        for(int i=1; ;i++){
            if(n%i != 0){
                ans = i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}