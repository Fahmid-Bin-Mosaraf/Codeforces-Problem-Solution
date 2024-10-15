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
        int l, r, a;
        cin>>l>>r>>a;

        if(l/a == r/a){
            cout<<r/a+r%a<<endl;
        }
        else{
            cout<<max(r/a+r%a, r/a-1+a-1)<<endl;
        }
    }
    return 0;
}