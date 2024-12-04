#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int h, m;
    cin>>h>>m;

    int maximum = 0;
    int customer = 1;

    for(int i=1; i<n; i++){
        int hour, min;
        cin>>hour>>min;

        if(hour == h && min == m){
            customer++;
        }
        else{
            customer = 1;
        }
        if(customer > maximum){
            maximum = customer;
        }
        h = hour;
        m = min;
    }
    cout<<max(maximum, customer)<<endl;
    return 0;
}