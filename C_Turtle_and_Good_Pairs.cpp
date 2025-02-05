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

        string s;
        cin>>s;

        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        while(n > 0){
            for(auto i=mp.begin(); i!=mp.end(); i++){
                if(i->second > 0){
                    cout<<i->first;
                    n--;
                    i->second--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}