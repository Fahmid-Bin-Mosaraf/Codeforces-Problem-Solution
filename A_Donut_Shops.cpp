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
        ll a, b, c;
        cin>>a>>b>>c;

        if(a < c){
            cout<<1<<" ";
        }
        else{
            cout<<-1<<" ";
        }

        if(c < a*b){
            cout<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}