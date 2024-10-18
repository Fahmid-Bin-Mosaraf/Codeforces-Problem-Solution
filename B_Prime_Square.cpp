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

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<(i==j || (i+1) % n==j)<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}