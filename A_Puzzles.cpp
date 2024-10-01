#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n,m;
    cin>>n>>m;

    vector<int>arr(m);
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int lv = arr[n-1] - arr[0];
    for(int i=1; i<=m-n; i++){
        if(arr[i+n-1] - arr[i] < lv){
            lv = arr[i+n-1] - arr[i];
        }
    }
    cout<<lv<<endl;
    return 0;
}