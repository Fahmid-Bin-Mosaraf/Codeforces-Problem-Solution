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
        int n, k;
        cin>>n>>k;

        vector<pair<int,int>>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());

        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());

        vector<int>ans(n);
        for(int i=0; i<n; i++){
            ans[a[i].second]=b[i];
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}