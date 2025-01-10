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

        vector<int>a(n+1, 0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a[x]++;
        }

        int maximum = 0;
        int count = 0;

        for(int i=1; i<=n; i++){
            if(a[i] > 0){
                count++;
            }
            maximum = max(maximum, a[i]);
        }
        cout<<max(min(maximum-1, count), min(maximum, count-1))<<endl;
    }
    return 0;
}