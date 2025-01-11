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

        vector<int>ans(n);
        for(int i=n-1; i>=0; i--){
            ans[i] = a[i];
            int x = i+a[i];
            if(x < n){
                ans[i] += ans[x];
            }
        }

        cout<<*max_element(ans.begin(), ans.end())<<endl;
    }
    return 0;
}