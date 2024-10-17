#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    if(n >= 0){
        cout<<n<<endl;
    }
    else{
        int a = n/10;
        int b = n%10;
        int c = (n/100) * 10 + b;

        cout<<max(a, c)<<endl;
    }
    return 0;
}