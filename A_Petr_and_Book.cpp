#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int a[7];
    for(int i=0; i<7; i++){
        cin>>a[i];
    }

    int x = 0;
    for(int i=0; i<7; i++){
        x += a[i];
    }

    n %= x;
    if(n == 0){
        n = x;
    }

    for(int i=0; i<7; i++){
        n -= a[i];
        if(n <= 0){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}