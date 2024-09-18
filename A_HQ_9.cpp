#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}