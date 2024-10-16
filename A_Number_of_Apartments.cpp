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

        if(n<3 || n==4){
            cout<<-1;
        }
        else if(n%3 == 0){
            cout<<n/3<<" "<<0<<" "<<0;
        }
        else if(n%3 == 1){
            cout<<(n/3)-2<<" "<<0<<" "<<1;
        }
        else{
            cout<<(n/3)-1<<" "<<1<<" "<<0;
        }
        cout<<endl;
    }
    return 0;
}