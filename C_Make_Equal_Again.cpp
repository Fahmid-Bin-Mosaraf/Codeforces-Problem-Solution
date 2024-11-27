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

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count1 = 0;
    int count2 = 0;

    while(count1 < n && a[count1] == a[0]){
        count1++;
    }
    while(count2 < n && a[n-count2-1] == a[n-1]){
        count2++;
    }

    int ans = n;
    if(a[0] == a[n-1]){
        ans -= count1;
        ans -= count2;
    }
    else{
        ans -= max(count1, count2);
    }
    cout<<max(0, ans)<<endl;
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

