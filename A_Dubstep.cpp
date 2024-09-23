#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string dubstep;
    cin>>dubstep;

    for(int i=0; i<dubstep.size(); i++){
        if(dubstep[i] == 'W' && dubstep[i+1] == 'U' && dubstep[i+2] == 'B'){
            i = i+2;
            cout<<" ";
        }
        else{
            cout<<dubstep[i];
        }
    }
    return 0;
}