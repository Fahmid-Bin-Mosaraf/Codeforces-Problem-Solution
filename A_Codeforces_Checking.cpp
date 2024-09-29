#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
const string s = "codeforces";
int main()
{
    fast_io;
    int t;  
    cin>>t;
    for(int i=0; i<t; i++){
        char c;
        cin>>c;

        bool found = false;
        for(char i : s){
            if(i == c){
                cout<<"YES\n";
                found = true;
                break;
            }
        }
        if(!found){
            cout<<"NO\n";
        }
    }
    return 0;
}