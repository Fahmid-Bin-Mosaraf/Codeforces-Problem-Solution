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
        int n, m, sx, sy, d;
        cin>>n>>m>>sx>>sy>>d;

        if(min(sx-1, m-sy) <= d && min(n-sx, sy-1) <= d){
            cout<<-1<<endl;
        } 
        else{
            cout<<n+m-2<<endl;
        }
    }
    return 0;
}