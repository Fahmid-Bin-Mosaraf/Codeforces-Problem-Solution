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

        int ans = 1;
        int sum = 1;

        while(sum < n){
            ans++;
            sum = 3*(1<<(ans-1))-2;
        }
        cout<<ans<<endl;
    }
    return 0;
}