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
        string a, b;
        cin>>a>>b;

        int ans = 0;
        for(int i=0; i<a.size(); i++){
            if((a[i] == '0' && b[i] == '0') && (a[i+1] == '1' && b[i+1] == '1')){
                ans = 1;
                break;
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