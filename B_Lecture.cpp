#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;

    map<string, string>mp;
    for(int i=0; i<m; i++){
        string s1, s2;
        cin>>s1>>s2;
        mp[s1] = s2;
    }

    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        string b;
        b = mp[a];

        if(b.size() < a.size()){
            cout<<b<<" ";
        }
        else{
            cout<<a<<" ";
        }
    }
    return 0;
}