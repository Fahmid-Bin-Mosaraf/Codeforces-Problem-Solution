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
        int n, a, b;
        cin>>n>>a>>b;

        int ans = abs(a-b)-1;

        if(ans%2 == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}