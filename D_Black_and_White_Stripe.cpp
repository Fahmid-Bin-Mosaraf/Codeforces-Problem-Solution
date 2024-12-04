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
        ll n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        ll count = 0;

        for(int i=0; i<k; i++){
            if(s[i] == 'W'){
                count++;
            }
        }
        ll ans = count;

        for(int i=k; i<n; i++){
            if(s[i] == 'W'){
                count++;
            }
            if(s[i-k] == 'W'){
                count--;
            }
            ans = min(ans, count);
        }
        cout<<ans<<endl;
    }
    return 0;
}