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

        if(n%2){
            for(int i=0; i<n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<2<<" "<<6<<" ";
            for(int i=0; i<n-2; i++){
                cout<<4<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}