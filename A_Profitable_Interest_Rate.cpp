#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
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

        if(a >= b){
            cout<<a<<endl;
        }
        else{
            ll x = b-a;
            if(a-x > 0){
                cout<<a-x<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}