#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;

        if(n == k){
            cout<<1<<endl;
        }
        else if(n > k){
            if(n%k == 0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(k%n == 0){
                cout<<k/n<<endl;
            }
            else{
                cout<<k/n+1<<endl;
            }
        }
    }
    return 0;
}