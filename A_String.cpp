#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                count++;
                while(i<n && s[i] == '0')
                {
                    i++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}