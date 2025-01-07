#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, s;
    cin>>n;

    vector<int>count(5, 0);
    for(int i=0; i<n; i++){
        cin>>s;
        count[s]++;
    }

    int ans = count[4];
    int temp = min(count[1], count[3]);

    ans += count[3];
    count[1] -= temp;
    ans += count[2] / 2;

    if(count[2] % 2 == 1){
        ans++;
        count[1] -= min(2, count[1]);
    }

    if(count[1] > 0){
        ans += (count[1] + 3) / 4;   
    }
    cout<<ans<<endl;
    return 0;
}