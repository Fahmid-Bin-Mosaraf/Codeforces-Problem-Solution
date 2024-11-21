#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, t;
    cin>>n>>t;

    if(t == 10){
        if(n == 1){
            cout<<-1<<endl;
        }
        else{
            cout<<1;
            for(int i=1; i<n; i++){
                cout<<0;
            }
            cout<<endl;
        }
    }
    else{
        cout<<t;
        for(int i=1; i<n; i++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}