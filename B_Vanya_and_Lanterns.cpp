#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, l;
    cin>>n>>l;

    vector<int>a(n);
    for(int i=0; i<n; i++){
       cin>>a[i];
    }
    sort(a.begin(), a.end());

    int ans = 2*max(a[0], l-a[n-1]);

    for(int i=1; i<n; i++){
        ans = max(ans, (a[i]-a[i-1]));
    }

    cout<<fixed<<setprecision(10)<<(double)ans/2;
    return 0;
}