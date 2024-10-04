#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;

    if(n>m){
        if(m%2 == 0){
            cout<<"Malvika"<<endl;
        }
        else{
            cout<<"Akshat"<<endl;
        }
    }
    else{
        if(n%2 == 0){
            cout<<"Malvika"<<endl;
        }
        else{
            cout<<"Akshat"<<endl;
        }
    }
    return 0;
}