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

        unordered_map<string, int>um;
        int ans = 0;

        for(int i=0; i<n-1; i++){
            string s2 = s.substr(i, 2);
            if(um.count(s2)){
                if(um[s2] < i-1){
                    cout<<"YES"<<endl;
                    ans = 1;
                    break;
                }
            }
            else{
                um[s2] = i;
            }
        }
        
        if(!ans){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}