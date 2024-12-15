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
        ll m, a, b, c;
        cin>>m>>a>>b>>c;

        ll x = min(a, m) + min(b, m);
        ll y = m - min(a, m);
        ll z = m - min(b, m);

        x += min(c, y+z);
        cout<<x<<endl;
    }
    return 0;
}