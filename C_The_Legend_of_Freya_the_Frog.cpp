#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll x, y, k;
        cin>>x>>y>>k;

        ll x_ans = (x+k-1) / k;
        ll y_ans = (y+k-1) / k;

        cout<<max(2*x_ans-1, 2*y_ans)<<endl;
    }
    return 0;
}