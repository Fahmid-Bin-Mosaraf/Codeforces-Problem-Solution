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
        int n, k;
        cin>>n>>k;

        if(n > k){
            cout<<k<<endl;
        }
        else{
            int a = k/(n-1);
            int b = a*(n-1);
            int c = k-b;

            if(c == 0){
                cout<<(n*a)-1<<endl;
            }
            else{
                cout<<c+(n*a)<<endl;
            }
        }
    }
    return 0;
}