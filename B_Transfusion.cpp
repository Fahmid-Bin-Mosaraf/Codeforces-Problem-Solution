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
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }

        if(sum%n != 0){
            cout<<"NO"<<endl;
            continue;
        }

        ll x = sum/n;
        ll even = 0;
        ll odd = 0;

        for(int i=0; i<n; i++){
            if(i%2 == 0){
                even += a[i];
            }
            else{
                odd += a[i];
            }
        }

        if(even == x*((n+1)/2) && odd == x*(n/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}