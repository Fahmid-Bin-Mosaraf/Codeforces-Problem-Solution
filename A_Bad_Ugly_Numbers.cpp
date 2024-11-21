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
            cout<<-1<<endl;
        }
        else{
            cout<<5;
            for(int i=1; i<n; i++){
                cout<<7;
            }
            cout<<endl;
        }
    }
    return 0;
}