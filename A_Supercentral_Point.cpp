#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;
    int ans = 0;

    vector<int>x(n), y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<n; i++){
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        for(int j=0; j<n; j++){
            if(x[j]>x[i] && y[j]==y[i]){
                a = 1;
            }
            if(x[j]<x[i] && y[j]==y[i]){
                b = 1;
            }
            if(x[j]==x[i] && y[j]>y[i]){
                c = 1;
            }
            if(x[j]==x[i] && y[j]<y[i]){
                d = 1;
            }
        }
        if(a &&  b && c && d){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}