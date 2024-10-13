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
        ll n, k, x;
        cin>>n>>k>>x;

        ll max_sum = (n*(n+1)) / 2 - ((n-k)*(n-k+1)) / 2;
        ll min_sum = (k*(k+1)) / 2;

        if(x <= max_sum && x >= min_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}