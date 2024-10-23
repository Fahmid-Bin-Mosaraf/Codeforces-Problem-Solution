#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;
    cin>>s;

    string s2 = "hello";
    int j = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == s2[j]){
            j++;
        }
    }

    if(j == 5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}