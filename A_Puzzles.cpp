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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int min_dif = INT_MAX;
    for(int i=0; i<=m-n; i++){
        int dif = arr[i+n-1] - arr[i];
        if(dif < min_dif){
            min_dif = dif;
        }
    }
    cout<<min_dif<<endl;
    return 0;
}