#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int ans = 0;
    for(int i=0; i<n; i++){
        ans += (i+1) * (n-i) - i;

    }
    cout<<ans<<endl;
    return 0;
}