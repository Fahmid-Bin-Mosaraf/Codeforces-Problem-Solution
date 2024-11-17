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
        int n, x1, y1, x2, y2;
        cin>>n>>x1>>y1>>x2>>y2;

        int ans1 = min(min(x1, y1), min(n+1-x1, n+1-y1));
        int ans2 = min(min(x2, y2), min(n+1-x2, n+1-y2));

        cout<<abs(ans1-ans2)<<endl;
    }
    return 0;
}