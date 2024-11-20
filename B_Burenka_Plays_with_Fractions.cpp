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
        ll a, b, c, d;
        cin>>a>>b>>c>>d;

        ll ans1 = a*d;
        ll ans2 = b*c;

        if(ans1 == ans2){
            cout<<0<<endl;
        }
        else if(ans2 != 0 && ans1 % ans2 == 0 || ans1 != 0 && ans2 % ans1 == 0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}