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

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int sum = 0;
        int max = 0;
        unordered_map<int, int>mp;
        mp[0] = 1;

        for(int i=0; i<n; i++){
            sum += a[i];
            if(mp.count(sum)){
                max++;
                mp.clear();
                mp[0] = 1;
                sum = 0;
            }
            else{
                mp[sum]++;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}