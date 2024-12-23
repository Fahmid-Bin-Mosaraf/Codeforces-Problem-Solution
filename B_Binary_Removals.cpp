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

        int pos1 = 0;
        int pos2 = 0;

        for(int i=0; i<s.size(); i++){
            if(!pos1 && s[i] == '1' && s[i+1] == '1'){
                pos1 = 1;
            }
            if(pos1 && s[i] == '0' && s[i+1] == '0') {
                pos2 = 1;
                break;
            }
        }
        if(pos2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}