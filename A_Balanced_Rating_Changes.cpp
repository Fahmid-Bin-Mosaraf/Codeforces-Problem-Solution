#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x = 1;
    vector<int>ans(n);

    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            ans[i] = a[i]/2;
        }
        else{
            ans[i] = (a[i]+x)/2;
            x = -x;
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}