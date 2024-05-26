#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n,m;
    cin>>n>>m;

    int arr[m];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int dif = arr[m-1] - arr[0];
    for(int i=1; i<=m-n; i++)
    {
        if(arr[i+n-1]-arr[i] < dif)
        {
            dif = arr[i+n-1]-arr[i];
        }
    }
    cout<<dif<<endl;
    return 0;
}