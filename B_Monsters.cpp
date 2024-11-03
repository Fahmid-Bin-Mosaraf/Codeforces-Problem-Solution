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
         int n, k;
        cin>>n>>k;

        vector<int>a(n);
        vector<pair<int, int>>ans;

        for(int i=0; i<n; i++){
            cin>>a[i];
            int temp = a[i]%k;
            if(temp == 0){
                temp = k; 
            }
            ans.emplace_back(temp, i+1);
        }
        
        sort(ans.begin(), ans.end(), [](const pair<int, int>& x, const pair<int, int>& y){
            return x.first > y.first || (x.first == y.first && x.second < y.second);
        });
        
        for(auto i : ans) {
            cout<<i.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}