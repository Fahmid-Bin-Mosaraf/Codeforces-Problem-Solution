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

        string s;
        cin>>s;

        int ans = 1;
        int current = 1;

        for(int i=0; i<n; i++){
            if(s[i] != s[i-1]){
                current = 1;
            }
            else{
                current++;
            }
            ans = max(ans, current);
        }
        cout<<ans+1<<endl;
    }
    return 0;
}