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

        int ans = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == '1' && s[i+1] == '1'){
                ans = 1;
                break;
            }
        }

        if(s[0] == '1'){
            ans = 1;
        }
        if(s[n-1] == '1'){
            ans = 1;
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}