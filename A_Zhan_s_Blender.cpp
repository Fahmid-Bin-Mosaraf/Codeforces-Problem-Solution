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
        int n, x, y;
        cin>>n>>x>>y;

        int blend = min(x, y);
        int second = (n + blend - 1) / blend;

        cout<<second<<endl;
    }
    return 0;
}