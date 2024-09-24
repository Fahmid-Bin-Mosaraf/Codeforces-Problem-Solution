#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n,a,b;  
    cin>>n>>a>>b;

    cout<<(n-max(a+1,n-b))+1<<endl;
    return 0;
}