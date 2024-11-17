#include <bits/stdc++.h>
using namespace std;
#define ll long long                

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;

    if(n<5){
        cout<<-1<<endl;
        return;
    }

    for(int i=1; i<=n; i+=2){
        if(i != 5){
            cout << i << ' ';
        }
    }

    cout<<"5 4 ";

    for(int i=2; i<=n; i+=2){
        if(i != 4){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return;
}
int main(){
    fast_io();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
