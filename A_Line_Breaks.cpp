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
        int n, m;
        cin>>n>>m;

        vector<string>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int len = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            int x = a[i].length();
            if(len + x <= m){
                len += x;
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;        
    }
    return 0;
}