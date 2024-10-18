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

        if(n == 1){
            cout<<9;
        }
        else if(n == 2){
            cout<<98;
        }
        else if(n >= 3){
            cout<<989;
            for(int i=0; i<n-3; i++){
                cout<<i%10;
            }
        }
        cout<<endl;
    }
    return 0;
}