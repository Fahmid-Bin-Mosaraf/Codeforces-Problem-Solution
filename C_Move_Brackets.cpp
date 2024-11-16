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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int x = 0;
        int ans = 0;

        for(char c:s){
            if(c == '('){
                x++;
            }
            else{
                x--;
            }
            ans = min(ans, x);
        }
        cout<<-ans<<endl;
    }
    return 0;
}