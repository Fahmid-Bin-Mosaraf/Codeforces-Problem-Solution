#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int a, b, c;
    cin>>a>>b>>c;

    int x = sqrt((a*b)/c);
    int y = sqrt((b*c)/a);
    int z = sqrt((c*a)/b);

    cout<<4*(x+y+z)<<endl;
    return 0;
}