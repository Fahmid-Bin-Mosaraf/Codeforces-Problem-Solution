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
        int n, m, k;
        cin>>n>>m>>k;

        int x, y;
        cin>>x>>y;

        set<pair<int, int>>ans;
        for(int i=0; i<k; i++){
            int x1, y1;
            cin>>x1>>y1;
            if((x+y) % 2 == (x1+y1) % 2){
                ans.insert({x1, y1});
            }
        }
        if(ans.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}