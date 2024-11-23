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
        string s;
        cin>>s;

        ll ans = 0;
        ll count = 0;
        ll n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                count++;
            }
            else{
                if(0 < count){
                    ans += count+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}