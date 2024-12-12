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

        ll size = 2*n;
        vector<int>a(size);
        for(int i=0; i<size; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        int ans  = abs(a[n] - a[n-1]);

        cout<<ans<<endl;
    }
    return 0;
}