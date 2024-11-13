#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    int x = n*a;
    int y = (n/m)*b + min((n%m)*a, b);

    int ans = min(x, y);
    cout<<ans<<endl;
    return 0;
}