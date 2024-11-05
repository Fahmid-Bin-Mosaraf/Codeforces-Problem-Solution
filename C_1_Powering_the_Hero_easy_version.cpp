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
        ll n;
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll ans = 0;
        priority_queue<ll>pq;
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                if(pq.empty())continue;{
                    ans += pq.top();
                    pq.pop();
                }
            }
            else{
                pq.push(a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}