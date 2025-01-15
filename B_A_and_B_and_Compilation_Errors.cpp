#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, x;
    cin>>n;

    ll a = 0;
    ll b = 0;
    ll c = 0;

    for(int i=0; i<n; i++){
        cin>>x;
        a += x;
    }

    for(int i=0; i<n-1; i++){
        cin>>x;
        b += x;
    }

    for(int i=0; i<n-2; i++){
        cin>>x;
        c += x;
    }

    cout<<a-b<<endl;
    cout<<b-c<<endl;
    return 0;
}