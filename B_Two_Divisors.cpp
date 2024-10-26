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

        if(b%a == 0){
            cout<<(b*b)/a<<endl;
        }
        else{
            cout<<a*b/__gcd(a,b)<<endl;
        }
    }
    return 0;
}