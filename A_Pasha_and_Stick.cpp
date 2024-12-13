#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n;
    cin>>n;

    if(n%2){
        cout<<0<<endl;
    }
    else{
        cout<<(n/2-1)/2<<endl;
    }
    return 0;
}