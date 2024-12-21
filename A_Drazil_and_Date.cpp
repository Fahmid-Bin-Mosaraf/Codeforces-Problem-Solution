#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll a, b, s;
    cin>>a>>b>>s;

    if (s < abs(a)+abs(b) || (s-abs(a)-abs(b)) % 2 != 0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}