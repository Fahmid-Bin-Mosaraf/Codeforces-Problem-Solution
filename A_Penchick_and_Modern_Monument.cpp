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

        map<int,int>h;
        for(int i=0; i<n; i++){
            int m;
            cin>>m;
            h[m]++;
        }

        int count = 0;
        for(auto[m,y] : h){
            count = max(y,count);
        }
        cout<<n-count<<endl;
    }
    return 0;
}