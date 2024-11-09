#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        if(k == 1){
            cout<<"YES"<<endl;

            for(int i=1; i<=n; i++){
                cout<<i<<endl;
            }
            continue;
        }

        if(n%2 == 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        for(int i=1; i<=n; i++){
            for(int j=i; j<=n*k; j+=n){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}