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
        int n, m, k;
        cin>>n>>m>>k;

        int x = n/k;
        int a = min(m, x);
        int b = (m-a+k-2) / (k-1);

        cout<<a-b<<endl;
    }
    return 0;
}