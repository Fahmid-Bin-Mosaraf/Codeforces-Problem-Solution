#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<pair<int, int>>price(n);
    for(int i=0; i<n; i++){
        cin>>price[i].first>>price[i].second;
    }
    sort(price.begin(), price.end());

    for(int i=0; i<n-1; i++){
        if(price[i].second > price[i+1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}