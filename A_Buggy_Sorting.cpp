#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    if(n <= 2){
        cout<<-1<<endl;
    }
    else{
        for(int i=n; i>=1; i--){
            cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}