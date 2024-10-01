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

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int zero = 0;
        int mex = 0;

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                zero++;
            }
            mex = max(mex, arr[i]);
        }

        if(zero <= n-zero+1){
            cout<<0<<endl;
        }
        else{
            if(mex == 0){
                cout<<1<<endl;
            }
            else if(mex == 1){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}