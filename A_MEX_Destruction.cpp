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

        vector<int>a(n);
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }

        int zero = 1;
        for(int i=0; i<n; ++i){
            if(a[i] != 0){
                zero = 0;
                break;
            }
        }
        if(zero){
            cout<<0<<endl;
            continue;
        }

        int ans = 0;
        int x = 0;

        for(int i=0; i<n; ++i){
            if(a[i] != 0){
                if(!x){
                    x = 1;
                    ++ans;
                }
            } 
            else{
                x = false;
            }
        }
        cout<<min(ans, 2)<<endl;
    }
    return 0;
}