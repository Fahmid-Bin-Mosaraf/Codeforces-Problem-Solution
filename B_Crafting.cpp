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
        int n;
        cin>>n;
        
        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        vector<ll>b(n);
        for(int j=0; j<n; j++){
            cin>>b[j];
        }

        ll x = 0;
        ll y = -1;
        ll ans = 0;

        for(int i=0; i<n; i++){
            ll diff = abs(a[i] - b[i]);
            if(a[i] < b[i] && diff >= x){
                y = i;
                x = diff;
            }
        }

        for(int i=0; i<n; i++){
            if(i != y && a[i]-x < b[i]){
                ans = 1;
                break;
            }
        }

        if(ans){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}