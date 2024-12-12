#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        n--;

        int size = n+m;
        priority_queue<ll>a;
        for(int i=0; i<size; i++){
            ll b;
            cin>>b;
            a.push(b);
        }

        ll ans;
        cin>>ans;
        
        for(int i=0; i<n; i++){
            ans += a.top();
            a.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}