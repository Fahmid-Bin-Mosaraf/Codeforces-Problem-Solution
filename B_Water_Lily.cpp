#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    double h, l;
    cin>>h>>l;

    cout<<fixed<<setprecision(10)<<(l*l - h*h)/(2.0*h)<<endl;
    return 0;
}