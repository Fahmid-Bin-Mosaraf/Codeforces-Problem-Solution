#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string ab;
        cin >> ab;
 
        int len = ab.size();
        bool found = false;
 
        for (int i = 1; i < len; ++i) {
            string a = ab.substr(0, i);
            string b = ab.substr(i);
 
            if ((a[0] != '0' || a.size() == 1) && (b[0] != '0' || b.size() == 1)) {
                int aa = stoi(a);
                int bb = stoi(b);
 
                if (aa > 0 && bb > aa) {
                    cout << aa << " " << bb << endl;
                    found = true;
                    break;
                }
            }
        }
 
        if (!found) {
            cout << -1 << endl;
        }
    }
 
    return 0;
}