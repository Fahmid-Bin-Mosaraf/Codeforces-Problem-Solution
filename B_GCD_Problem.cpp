#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
            cout<<n-3<<" "<<2<<" "<<1<<endl;
        }
        else{
            n--; 
            n /= 2;
            if(n%2 == 0){
                cout<<n+1<<" "<<n-1<<" "<<1<<endl;
            }
            else{
                cout<<n+2<<" "<<n-2<<" "<<1<<endl;
            }
        }
    }
    return 0;
}