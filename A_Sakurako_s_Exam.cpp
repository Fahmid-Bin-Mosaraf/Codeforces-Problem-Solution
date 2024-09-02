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

        if(a % 2){
            cout<<"NO"<<endl;
        }
        else{
            if(b % 2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                if(a == 0){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    return 0;
}