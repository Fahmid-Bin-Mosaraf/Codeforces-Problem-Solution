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
        int n, m, k;
        cin>>n>>m>>k;

        vector<int>a(m);
        for(int i= 0; i<m; i++){
            cin>>a[i];
        }

        unordered_set<int>b;
        for(int i=1; i<=n; i++){
            b.insert(i);
        }

        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            b.erase(x);
        }

        string ans;
        for(int i=0; i<m; i++){
            if(b.size()==0 || (b.size()==1 && b.count(a[i]))){
                ans += '1';
            } 
            else{
                ans += '0';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}