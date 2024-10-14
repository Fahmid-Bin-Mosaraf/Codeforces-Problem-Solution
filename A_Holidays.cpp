#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int week = n/7;
    int days = n%7;

    int max = week * 2 + min(days, 2);
    int min = week * 2;

    if(days > 5){
        min += days -5;
    }
    cout<<min<<" "<<max<<endl;
    
    return 0;
}