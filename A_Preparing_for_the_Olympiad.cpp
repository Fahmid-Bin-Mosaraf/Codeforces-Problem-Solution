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

        vector<int>a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i]; 
        }

        int maximum = 0;

        for(int i=0; i<n; i++){
            int ans = a[i];
            if(i+1 < n){
                ans -= b[i+1];
            }

            if(ans > 0){
                maximum += ans;
            }
        }
        cout<<maximum<<endl;
    }
    return 0;
}