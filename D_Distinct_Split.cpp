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

        string s;
        cin>>s;

        vector<int>left(n), right(n);
        set<char>st;

        for(int i=0; i<n; i++){
            st.insert(s[i]);
            left[i] = st.size();
        }

        st.clear();

        for(int i=n-1; i>=0; i--){
            st.insert(s[i]);
            right[i] = st.size();
        }

        int ans = 0;
        for(int i=0; i<n-1; i++){
            ans = max(ans, left[i] + right[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}