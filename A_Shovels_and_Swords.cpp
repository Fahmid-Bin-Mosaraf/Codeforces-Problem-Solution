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
        int l, r;
        cin>>l>>r;

        cout<<min({l, r, (l+r)/3})<<endl;
    }
    return 0;
}