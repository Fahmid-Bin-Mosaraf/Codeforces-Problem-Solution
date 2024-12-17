#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    double ans = 0;
    for(int i=1; i<=n; i++){
        ans += 1.0/i;
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}