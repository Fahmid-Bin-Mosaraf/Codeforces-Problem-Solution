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
        if(is_sorted(a.begin(), a.end())){
            cout<<0<<endl;
        }
        else if(a[0] == 1 || a[n-1] == n){
            cout<<1<<endl;
        }
        else if(a[0] == n && a[n-1] == 1){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}