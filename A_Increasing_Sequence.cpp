#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, d;
    cin>>n>>d;

    vector<int>b(n);
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int ans = 0;
    for(int i=1; i<n; i++){
        if(b[i] <= b[i-1]){
            int seq = b[i-1] - b[i] + 1;
            ans += (seq + d - 1) / d;
            b[i] += (seq + d - 1)/d*d;
        }
    }
    cout<<ans<<endl;
    return 0;
}