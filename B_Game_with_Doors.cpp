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
        int l, r, L, R;
        cin>>l>>r>>L>>R;

        int minimum = min(r, R);
        int maximum = max(l, L);

        int room = minimum - maximum + 1;
        int ans = room - 1;

        if(room <= 0){
            ans = 1;
        }
        else{
            ans += (l != L);
            ans += (r != R);
        }
        cout<<ans<<endl;
    }
    return 0;
}