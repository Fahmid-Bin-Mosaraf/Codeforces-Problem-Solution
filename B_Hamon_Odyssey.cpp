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
        
        ll a;
        cin>>a;

        ll count = 0;
        for(ll i=1; i<n; i++){
            ll x;
            cin>>x;
            
            if(!a){
                count++;
                a = x; 
            }
            else{
                a &= x;
            }
        }
        count += !a; 
        count += !count; 
        cout<<count<< endl;
    }
    return 0;
}