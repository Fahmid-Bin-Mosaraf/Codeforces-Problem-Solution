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

		int ans = 0;
        int temp = 0;

        for(int i= 0; i<s.size(); i++){
            if(s[i] == 'R'){
                ans = max(ans, i+1-temp);
                temp = i+1;
            }
        }

        ans = max(ans, int(s.size())+1-temp);
        cout<<ans<<endl;
    }
    return 0;
}