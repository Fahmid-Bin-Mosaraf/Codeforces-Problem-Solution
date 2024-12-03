#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int k;
    cin>>k;

    string s;
    cin>>s;

    vector<int>a(26, 0);
    for(char c : s){
        a[c-'a']++;
    }

    string ans = "";
    for(int i=0; i<26; i++){
        if(a[i]%k != 0){
            cout<<-1<<endl;
            return 0;
        }
        ans += string(a[i]/k, 'a'+i);
    }

    for(int i=0; i<k; i++){
        cout<<ans;
    }
    cout<<endl;
    return 0;
}