#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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

        int x = n-3;
        cout<<1<<" ";

        for(int i=1; i<=x; i++){
            cout<<i<<" ";
        }
        cout<<1<<" "<<2<<endl;
    }
    return 0;
}