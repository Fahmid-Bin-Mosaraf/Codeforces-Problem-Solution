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

        string ans;
        for(int i=0; i<n;){
            ans += s[i];
            int j = i+1;
            
            while(j<n && s[j] != s[i]){
                j++;
            }
            i = j+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}