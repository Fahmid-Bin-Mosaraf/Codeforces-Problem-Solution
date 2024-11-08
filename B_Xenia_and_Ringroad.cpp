#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n, m;
    cin>>n>>m;

    ll time = 0;
    ll a = 0;

    for(int i=0; i<m; i++){
        ll b;
        cin>>b;

        if(b >= a){
            time += b-a;
        }
        else{
            time += n-a+b;
        }
        a = b;
    }
    cout<<time-1<<endl;
    return 0;
}