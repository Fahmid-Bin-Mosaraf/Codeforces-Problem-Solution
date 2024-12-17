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

        vector<int>p(n);
        for(int i=0; i<n; i++){
            cin>>p[i];
        }

        string s;
        cin>>s;

        vector<int>index(n);
        for(int i=0; i<n; i++){
            index[i] = i;
        }

        sort(index.begin(), index.end(), [&](int i, int j){
            if(s[i] == s[j]){
                return p[i] < p[j];
            }
            return s[i] < s[j];
        });

        vector<int>q(n);
        for(int i=0; i<n; ++i){
            q[index[i]] = i+1;
        }

        for(int i=0; i<n; ++i){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}