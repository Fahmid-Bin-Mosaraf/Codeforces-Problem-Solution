#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long long int lli;
const int N = 1e5 + 5;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<int>a(N);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        int r = n;
        int l = 1;

        while(l < n && a[l] <= a[l+1]){
            l++;
        }
        while(r > 1 && a[r-1] >= a[r]){
            r--;
        }

        if(l >= r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}