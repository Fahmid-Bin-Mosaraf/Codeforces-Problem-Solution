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

        ll sq = 0;
        for(int i=0; i<n; i++){
            ll a;
            cin>>a;
            sq += a;
        }

        ll total = sqrt(sq);
        if(total*total == sq){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}