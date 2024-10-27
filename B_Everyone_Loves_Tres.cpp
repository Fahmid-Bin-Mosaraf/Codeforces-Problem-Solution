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

        if(n==1 || n==3){
            cout<<-1<<endl;
        }
        else if(n%2 == 0){
            for(int i=0; i<(n/2)-1; i++){
                cout<<33;
            }
            cout<<66<<endl;
        }
        else{
            for(int i=0; i<n-5; i++){
                cout<<3;
            }
            cout<<36366;
            cout<<endl;
        }
    }
    return 0;
}