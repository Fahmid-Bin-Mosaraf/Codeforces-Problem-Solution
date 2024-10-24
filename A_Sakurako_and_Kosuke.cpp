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

        if(n%2 == 0){
            cout<<"Sakurako"<<endl;
        }
        else{
            cout<<"Kosuke"<<endl;
        }
    }
    return 0;
}