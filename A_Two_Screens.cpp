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
        string s1, s2;
        cin>>s1>>s2;

        int prefix = 0;
        while(prefix < s1.size() && prefix < s2.size() && s1[prefix] == s2[prefix]){
           prefix++; 
        }

        if(prefix == 0){
            cout<<s1.size() + s2.size()<<endl;
        }
        else{
            int ans = prefix + 1 + (s1.size()-prefix) + (s2.size()-prefix);
             cout<<ans<<endl;
        }
    }
    return 0;
}

