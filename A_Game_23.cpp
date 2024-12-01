#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;
        
    if(m%n != 0){
        cout<<-1<<endl;
        return 0;
    }

    int x = m/n;
    int moves = 0;

    while(x%2 == 0){
        x /= 2;
        moves++;
    }
    while(x%3 == 0){
        x /= 3;
        moves++;
    }
        
    if(x != 1){
        cout<<-1<<endl;
    }
    else{
        cout<<moves<<endl;
    }
    return 0;
}