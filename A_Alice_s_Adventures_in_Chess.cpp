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
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int x = 0;
        int y = 0;

        int ans = 0;

        for(int i=0; i<1000; i++){
            for(int j=0; j<n; j++){
                if(s[j] == 'N'){
                    y++;
                }
                else if(s[j] == 'S'){
                    y--;
                }
                else if(s[j] == 'E'){
                    x++;
                }
                else if(s[j] == 'W'){
                    x--;
                }
                if(x == a && y == b){
                    ans = 1;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}