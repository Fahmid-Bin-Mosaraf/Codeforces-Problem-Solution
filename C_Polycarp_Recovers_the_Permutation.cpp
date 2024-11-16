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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(a[0] != n && a[n-1] != n){
            cout<<-1<<endl;
        }
        else{
            if(a[0] == n){
                for(int i=n-1; i>=0; i--){
                    cout<<a[i]<<" ";
                }
            }
            else{
                for(int i=n-1; i>=0; i--){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}