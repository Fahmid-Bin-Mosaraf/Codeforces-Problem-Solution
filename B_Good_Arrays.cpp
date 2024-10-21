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

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll sum =0;
        ll count = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
            if(a[i] == 1){
                count++;
            }
        }

        if(sum >= count+n && n>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}