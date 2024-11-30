#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n;

    int ans = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        cin>>m;
        count += m;
    }

    int sum = count % (n+1);

    for(int i=1; i<=5; i++){
        if((sum+i) % (n+1) != 1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}