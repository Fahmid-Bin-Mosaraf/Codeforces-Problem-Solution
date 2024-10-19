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
        int x;
        cin>>x;

        if(x>45){
            cout<<-1<<endl;
            continue;
        }
        
        vector<int>ans;
        for(int i=9; i>=1; i--){
            if(x >= i){
                ans.push_back(i);
                x -= i;
            }
        }

        for(int i=ans.size()-1; i >=0 ; i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}