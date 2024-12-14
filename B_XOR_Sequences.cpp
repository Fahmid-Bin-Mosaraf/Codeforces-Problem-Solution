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
        int x, y;
        cin>>x>>y;

        for(int i=0; i<30; i++){
            if ((x&(1<<i)) != (y&(1<<i))){
                cout<<(1LL<<i)<<endl;
                break;
            }
        }
    }
    return 0;
}