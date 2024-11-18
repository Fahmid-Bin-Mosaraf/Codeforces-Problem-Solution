#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n>14 && (n%14 >= 1 && n%14 <= 6)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}