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

        int ans;
        if(a%4 == 1){
            ans = a-1;
        }
        else if(a%4 == 2){
            ans = 1;
        }
        else if(a%4 == 3){
            ans = a;
        }
        else{
            ans = 0;
        }

        if(ans == b){
            cout<<a<<endl;
        }
        else if((ans^b) != a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
    }
    return 0;
}