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
        ll k, n;
        cin>>k>>n;

        ll diff = 1;
        ll count = 1;

        for(int i=1; i<=k; i++){
            cout<<count<<" ";

            if(n -(count+diff) >= (k-i-1)){
                count += diff;
                diff++;
            }
            else{
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}