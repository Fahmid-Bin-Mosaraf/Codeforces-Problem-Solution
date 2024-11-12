#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, k;
    cin>>n>>k;

    int time = 0;
    int solved = 0;

    for(int i=1; i<=n; i++){
        time += 5*i;
        if(time+k <= 240){
            solved++;
        }
        else{
            break;
        }
    }
    cout<<solved<<endl;
    return 0;
}