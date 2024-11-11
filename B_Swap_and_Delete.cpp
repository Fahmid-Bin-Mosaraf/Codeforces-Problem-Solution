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

        int coin0 = 0;
        int coin1 = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                coin0++;
            }
            else{
                coin1++;
            }
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                if(coin1){
                    coin1--;
                }
                else{
                    break;
                }
            }
            else{
                if(coin0){
                    coin0--;
                }
                else{
                    break;
                }
            }
        }
        cout<<coin0+coin1<<endl;
    }
    return 0;
}