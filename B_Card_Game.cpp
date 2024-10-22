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
        int a1, a2, a3, a4;
        cin>>a1>>a2>>a3>>a4;

        int ans = 0;
        if(a1>a3 && a2>=a4 || a1>=a3 && a2>a4){
            ans +=2;
        }
        if(a2>a3 && a1>=a4 || a2>=a3 && a1>a4){
            ans += 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}