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
        int n;
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll coins = 0;
        ll diff = 0;

        for(int i=1; i<n; i++){
            if(a[i] < a[i-1]){
                coins += a[i-1] - a[i];
                diff = max(diff, a[i-1]-a[i]);
                a[i] = a[i-1];
            }
        }
        coins += diff;
        cout<<coins<<endl;        
    }
    return 0;
}