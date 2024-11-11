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

        int p = pow(2, (int)log2(n-1));

        for(int i=p-1; i>=0; i--){
            cout<<i<<" ";
        }

        for(int i=p; i<n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}