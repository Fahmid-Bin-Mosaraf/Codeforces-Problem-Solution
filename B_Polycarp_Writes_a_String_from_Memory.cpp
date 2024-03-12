#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
 
        int ans=0;
        set<char>st;
        for(int i=0; i<len; i++)
        {
            st.insert(s[i]);
 
            if(st.size() > 3)
            {
                ans++;
 
                st.clear();
                st.insert(s[i]);
            }
        }
        if(len != 0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}