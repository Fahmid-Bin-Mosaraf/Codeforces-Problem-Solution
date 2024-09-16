#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    lli n, k, res;
    cin>>n>>k;
    if(n%2 == 0){
        res = n/2;
    }
    else{
        res = n/2+1;
    }
    if(k <= res){
        cout<<(2*k)-1<<endl;
    }
    else{
        cout<<(k-res)*2<<endl;
    }
    return 0;
}