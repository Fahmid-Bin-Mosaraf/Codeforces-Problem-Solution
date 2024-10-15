#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=n-2; i>=0; i--){
        while(a[i] >= a[i+1] && a[i] > 0){
            a[i] /= 2;
            ans++;
        }
        if(a[i] == a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}