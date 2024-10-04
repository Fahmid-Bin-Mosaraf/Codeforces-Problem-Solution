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
        int n;
        cin>>n;

        vector<int>permutation(n+1);
        for(int i=1; i<=n; i++){
            cin>>permutation[i];
        }

        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = __gcd(abs(permutation[i]-i), ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}