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
        
        int total = 4*n-2;
        if(total == k)
        {
            cout<<2*n<<endl;
        }
        else if(k%2 == 0)
        {
            cout<<k/2<<endl;
        }
        else
        {
            cout<<k/2+1<<endl;
        }
    }
    return 0;
}