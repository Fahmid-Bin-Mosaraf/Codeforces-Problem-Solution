#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n;

    vector<int>a(n);
    map<int, int>mp;

    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]] = i+1;
    }

    ll sum1 = 0;
    ll sum2 = 0;

    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        sum1 += mp[x];
        sum2 += n - mp[x] + 1;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}