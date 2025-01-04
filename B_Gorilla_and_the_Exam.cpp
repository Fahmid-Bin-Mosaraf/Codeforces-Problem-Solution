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

        unordered_map<int, int>um;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            um[x]++;
        }

        vector<int>a;
        for(auto i : um){
            a.push_back(i.second);
        }
        sort(a.begin(), a.end());

        stack<int>ans;
        for(int i=a.size()-1; i>=0; i--){
            ans.push(a[i]);
        }

        while(ans.size()>0 && ans.top()<= k){
            k -= ans.top();
            ans.pop();
        }
        
        cout<<(ans.size()>0 ? ans.size():1)<<endl;
    }
    return 0;
}