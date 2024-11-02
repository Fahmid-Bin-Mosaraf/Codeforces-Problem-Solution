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

        if(k > 30){
            k = 30;
        }

        int max = pow(2, k)-1;
        cout<<min(n, max)+1<<endl;
    }
    return 0;
}