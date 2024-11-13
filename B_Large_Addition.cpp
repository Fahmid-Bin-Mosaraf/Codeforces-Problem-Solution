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
        string x;
        cin>>x;
        int n = x.size();
        
        if(x.back() == '9' || x[0] != '1'){
            cout<<"NO"<<endl;
        }
        else{
            int ans = 1;
            for(int i=0; i<n-1; i++){
                if(x[i] == '0'){
                    ans = 0;
                }
            }
            if(ans){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}