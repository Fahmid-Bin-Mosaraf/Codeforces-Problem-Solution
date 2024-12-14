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

        int x = (n+3) / 4;
        for(int i=0; i<n-x; i++){
            cout<<9;
        }
        for(int i=0; i<x; i++){
            cout<<8;
        }
        cout<<endl;
    }
    return 0;
}