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
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '?'){
                if(i > 0){
                    s[i] = s[i-1];
                }
                else{
                    s[i] = '0';
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}