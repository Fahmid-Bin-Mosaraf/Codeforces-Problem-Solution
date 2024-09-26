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

        while(n > m){
            cout<<n<<" ";
            n--;
        }

        for(int i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}