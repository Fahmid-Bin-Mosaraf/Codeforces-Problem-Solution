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
       int n, k;
        cin>>n>>k;

        if(n<k || k == 1){
            cout<<n<<endl;
        }
        else{
            int operation = 0;
            while(n>0){
                operation += n % k;
                n /= k;
            }
            cout<<operation<<endl;
        }
    }
    return 0;
}