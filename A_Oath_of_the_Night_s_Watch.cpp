#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int count = 0;
    for(int i=0; i<n; i++){
        if(a[0]<a[i] && a[n-1]>a[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}