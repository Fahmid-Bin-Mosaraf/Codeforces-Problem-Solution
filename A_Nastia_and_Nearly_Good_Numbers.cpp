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
        ll a, b;
        cin>>a>>b;

        if(b == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            ll x = a;
            ll y = a*b;
            ll z = a*(b+1);

            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}