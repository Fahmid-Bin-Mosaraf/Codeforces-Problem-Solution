#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int>a(n+1);
    for(int i=2; i<=n; i++){
        if(a[i] == 0){
            for(int j=i; j<=n; j+=i){
                a[j]++;
            }
        }
    }

    int count = 0;
    for(int i=2; i<=n; i++){
        if(a[i] == 2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}