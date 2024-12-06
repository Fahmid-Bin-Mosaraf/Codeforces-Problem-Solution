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
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] != s[i+1]){
                count++;
            }
        }

        int ans = a*n;
        if(b >= 0){
            ans += b*n;
        } 
        else{
            ans += (b*(count/2+1));
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}