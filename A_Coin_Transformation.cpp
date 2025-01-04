#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        int ans = 1;
        while(n > 3){
            n /= 4;
            ans *= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}