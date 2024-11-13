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
        ll x;
        cin>>x;

        ll a = 1;
        ll b = cbrt(x);
        ll ans = 0;

        while(a <= b){
            ll sum = a*a*a+b*b*b;
            if(sum == x){
                ans = 1;
                break;
            }
            else if(sum < x){
                a++;
            }
            else{
                b--;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}