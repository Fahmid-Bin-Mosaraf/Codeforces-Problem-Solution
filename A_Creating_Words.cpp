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
        string a, b;
        cin>>a>>b;

        swap(a[0], b[0]);

        cout<<a<<" "<<b<<endl;
    }
    return 0;
}