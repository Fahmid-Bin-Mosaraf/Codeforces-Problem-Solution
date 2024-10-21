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

        string s = "";
        for(int i=0; i<a; i++){
            s += char('a'+(i%b));
        }

        for(int i=0; i<n; i++){
            cout<<s[i%a];
        }
        cout<<endl;
    }
    return 0;
}