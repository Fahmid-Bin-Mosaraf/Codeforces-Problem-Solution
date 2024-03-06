#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = INT_MIN, y = INT_MAX;
        vector<int> result;
        for(int i=0; i<n; i++) {
            int a, b;
            cin >>a>>b;
            if(a == 1) {
                x = max(x, b);
            } else if(a == 2) {
                y = min(y, b);
            } else {
                result.push_back(b);
            }
        }
        sort(result.begin(), result.end());
        int ans = max(0, y - x + 1);
        for(auto b : result) {
            if(x <= b && b <= y) {
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}