#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    // Lucky Numbers
    vector<int>arr = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 777};

    for(int i=0; i<arr.size(); i++){
        if(n%arr[i] == 0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}