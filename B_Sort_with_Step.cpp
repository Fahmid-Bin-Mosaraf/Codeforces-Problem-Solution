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

        vector<int>p(n);
        for(int i=0; i<n; i++){
            cin>>p[i];
            p[i]--;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            if(p[i]%k != i%k){
                ans++;
            }
        }

        if(ans == 0){
            cout<<0<<endl;
        }
        else if(ans == 2){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}