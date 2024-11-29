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

        vector<int>a(k, 0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a[x%k]++;
        }

        if(a[0] > 0){
            cout<<0<<endl;
            continue;
        }

        if(k == 4){
            if(a[2] >= 2){
                cout<<0<<endl;
            }
            else if(a[2] == 1 || a[3] > 0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
            continue;
        }

        int ans = 0;
        for(int i=1; i<k; i++){
            if(a[i] > 0){
                ans = max(ans, i);
            }
        }
        cout<<k-ans<<endl;
    }
    return 0;
}