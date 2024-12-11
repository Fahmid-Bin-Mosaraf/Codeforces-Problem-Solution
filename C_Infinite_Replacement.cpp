#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int q;  
    cin>>q;
    while(q--)
    {
        string s, t;
        cin>>s>>t;

        if(t == "a"){
            cout<<1<<endl;
        } 
        else{
            int ans = 0;
            for(int i=0; i<t.length(); i++){
                if(t[i] == 'a'){
                    ans = 1;
                    break;
                }
            }
            if(ans){
                cout<<-1<<endl;
            } 
            else{
                cout<<(1LL<< s.length())<<endl;
            }
        }
    }
    return 0;
}