#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;
    cin>>s;

    int ans = 1;
    for(int i=1; i<s.length(); i++){
        if(islower(s[i])){
            ans = 0;
            break;
        }
    }

    if(ans){
        for(int i=0; i<s.length(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}