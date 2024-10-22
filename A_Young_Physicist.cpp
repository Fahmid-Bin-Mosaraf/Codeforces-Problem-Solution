#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;

    for(int i=0; i<n; i++){
        int x, y, z;
        cin>>x>>y>>z;

        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if(sum_x == 0 && sum_y == 0 && sum_z == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}