#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        int a, b, n, s;
        cin>>a>>b>>n>>s;

        int coin = min(a, s/n);
        int ans = s-coin*n;

        if(ans <= b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}