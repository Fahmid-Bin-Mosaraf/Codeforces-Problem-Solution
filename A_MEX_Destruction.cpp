#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);
        unordered_map<int, int> freq;
        for(int i=0; i<n; ++i){
            cin>>a[i];
            freq[a[i]]++;
        }

        vector<vector<int>> result;
        int mex = 0;

        while (true) {
            vector<int> current_set;
            while (freq[mex] > 0) {
                current_set.push_back(mex);
                freq[mex]--;
                mex++;
            }
            if (current_set.empty()) break;
            result.push_back(current_set);
        }

        cout << result.size() << endl;
        for (const auto& subset : result) {
            cout << subset.size();
            for (int num : subset) {
                cout << " " << num;
            }
            cout << endl;
        }
    }
    return 0;
}