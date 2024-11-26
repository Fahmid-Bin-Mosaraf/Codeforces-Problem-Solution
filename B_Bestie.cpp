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
        ll n;
        cin>>n;

        vector<ll>a(n+1);
        ll GCD = 0;

        for(int i=1; i<=n; i++){
            cin>>a[i];
            GCD = __gcd(GCD, a[i]);
        }

        if(GCD == 1){
            cout<<0<<endl;
            continue;
        }

        if(__gcd(GCD, n) == 1){
            cout<<1<<endl;
        }
        else if(__gcd(GCD, n-1) == 1){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    return 0;
}