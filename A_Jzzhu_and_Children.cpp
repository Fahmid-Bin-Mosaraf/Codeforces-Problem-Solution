#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;

    int a;
    int child;
    int max = 0;
    
    for(int i=1; i<=n; i++){
        cin>>a;
        int ans = (a+m-1) / m;

        if(ans >= max){
            child = i;
            max = ans;
        }
    }
    cout<<child<<endl;
    return 0;
}