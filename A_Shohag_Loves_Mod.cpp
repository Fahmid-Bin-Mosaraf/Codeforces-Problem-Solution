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

        int value = 1;
        for(int i=0; i<n; i++){
            cout<<value<<" ";
            value += 2;
        }
        cout<<endl;
    }
    return 0;
}