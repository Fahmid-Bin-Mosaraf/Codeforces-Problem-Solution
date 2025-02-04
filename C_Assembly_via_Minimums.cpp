#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int m = n*(n-1) / 2;

        map<int, int, greater<ll>>mp;
        for(int i= 0; i<m; i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        int x = 0;
        for(auto& i: mp) {
            while(i.second > 0){
                cout<<i.first<<" ";
                i.second -= x;
                x++;
            }
        }
        cout<<endl;
    }
    return 0;
}