#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string n;
    cin>>n;

    int count = 0;
    while(n.size() > 1){
        int sum = 0;
        for(int i=0; i<n.size(); i++){
            sum += (n[i] - '0');
        }
        n = to_string(sum);
        count++;
    }
    cout<<count<<endl;
    return 0;
}