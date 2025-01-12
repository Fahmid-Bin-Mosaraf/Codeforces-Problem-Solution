#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int m, l, r;
    string s;
    cin>>s>>m;

    int n = s.size();
    
    vector<int>a(n, 0);
    for(int i=1; i<n; i++){
        a[i] = a[i-1] + (s[i] == s[i-1]);
    }

    while(m--){
        cin>>l>>r;
        cout<<a[r-1] - a[l-1]<<endl;
    }
    return 0;
}