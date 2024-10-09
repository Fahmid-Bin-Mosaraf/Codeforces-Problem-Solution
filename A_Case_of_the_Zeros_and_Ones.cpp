#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count1 = 0;
    int count2 = 0;

    for(char i : s){
        if(i == '0'){
            count1++;
        }
        else{
            count2++;
        }
    }
    int ans = abs(count1 - count2);
    cout<<ans<<endl;
    return 0;
}