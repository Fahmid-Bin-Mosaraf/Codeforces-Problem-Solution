#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int c1, c2, c3, c4, c5;
    cin>>c1>>c2>>c3>>c4>>c5;

    int sum = c1+c2+c3+c4+c5;

    if(sum%5 != 0){
        cout<<-1<<endl;
    }
    else{
        int ans = sum/5;
        if(ans == 0){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}