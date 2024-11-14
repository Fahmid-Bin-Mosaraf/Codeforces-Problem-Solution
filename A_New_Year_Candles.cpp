#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int a, b;
    cin>>a>>b;

    int x = 0;
    int y = 0;

    while(a > 0){
        x += a;
        y += a;
        a = y/b;
        y = y%b;
    }
    
    cout<<x<<endl;
    return 0;
}