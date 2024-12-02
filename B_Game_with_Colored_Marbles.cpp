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

    vector<int>c(n);
    unordered_map<int, int>um;

    for(int i=0; i<n; i++){
        cin>>c[i];
        um[c[i]]++;
    }

    int count = 0;
    vector<pair<int, int>>vec(um.begin(), um.end());
    for(int i=0; i<vec.size(); i++){
        if(vec[i].second == 1){
            count++;
        }
    }

    int count2 = (count%2 == 0) ? count : count+1;
    int ans = count2 + um.size() - count;
    cout<<ans<<endl;

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
