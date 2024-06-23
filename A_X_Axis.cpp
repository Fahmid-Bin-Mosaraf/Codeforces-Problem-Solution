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
        int x1, x2, x3;
        cin>>x1>>x2>>x3;

        int f1 = abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3);
        int f2 = abs(x2 - x1) + abs(x2 - x2) + abs(x2 - x3);
        int f3 = abs(x3 - x1) + abs(x3 - x2) + abs(x3 - x3);

        int ans = min({f1, f2, f3});

        cout<<ans<<endl;
    }
    return 0;
}