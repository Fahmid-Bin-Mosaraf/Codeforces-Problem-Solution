#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    int res = 0;
	string ans;
	for(int i=0; i<n; i++){
		int count = 0;
		for(int j=0; j<n; j++){
			if(s[i] == s[j] && s[i+1] == s[j+1]){
				count++;
                if (res<count) {
		            res = count;
			        ans = string(1,s[i]) + string(1,s[i+1]);
                }
            }
		}
	}
	cout<<ans<<endl;
    return 0;
}