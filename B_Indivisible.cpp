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
        int n;
        cin>>n;
 
        if(n == 1){
            cout<<1<<endl;
            continue;
        }
 
        if(n & 1){
            cout<<-1<<endl;
            continue;
        }
 
        for(int i=2; i<=n; i+=2){
            cout<<i<<" "<<i-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}