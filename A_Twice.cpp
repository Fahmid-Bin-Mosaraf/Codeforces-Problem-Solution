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
        sort(a.begin(), a.end());

        int ans = 0;
        int count = 1;

        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                count++;
            }
            else{
                ans += count/2;
                count = 1;
            }
        }

        ans += count/2;
        cout<<ans<<endl;
    }
    return 0;
}