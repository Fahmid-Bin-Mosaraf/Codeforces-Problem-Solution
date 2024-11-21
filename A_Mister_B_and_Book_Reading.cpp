#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int c, v0, v1, a, l;
    cin>>c>>v0>>v1>>a>>l;

    int count = 1;
    c -= v0;
    while(c > 0){
        v0 = min(v0+a, v1);
        c -= v0;
        count++;
        c += l;
    }
    cout<<count<<endl;
    return 0;
}