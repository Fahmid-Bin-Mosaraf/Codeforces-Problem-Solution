#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    string team1, team2;
    int count1 = 0, count2 = 0;

    cin>>team1;
    count1++;

    for(int i=1; i<n; i++){
        string team;
        cin>>team;

        if(team == team1){
            count1++;
        }
        else{
            if(team2.empty()){
                team2 = team;
            }
            count2++;
        }
    }
    
    if(count1 > count2){
        cout<<team1<<endl;
    }
    else{
        cout<<team2<<endl;
    }
    return 0;
}