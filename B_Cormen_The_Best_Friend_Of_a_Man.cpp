#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, k;
    cin>>n>>k;

    vector<int>a(n, 0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] + a[i-1]< k){
            count += k-a[i] - a[i-1];
            a[i] = k-a[i-1];
        }
    }
    cout<<count<<endl;

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}