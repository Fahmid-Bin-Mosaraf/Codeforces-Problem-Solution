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
        int a, b;
        cin>>a>>b;

        int m;
        if(a > b){
            m = a;
        }
        else{
            m = b;
        }

        for(int i=m; ; i++){
            if(i%a == i%b){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}