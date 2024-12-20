#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s ; 
    cin>>s;

	int n = s.size();
    int count = 0 ;
	int ans = n/2;

	if(n%2 == 0){
		cout<<ans<<endl;
		return 0;
	}

	for(int i=1 ; i<n; i++){
		if(s[i] == '1')
			count++;
	}

	if(count > 0){
        count = 1;
    }
	cout<<ans+count<<endl;

    return 0;
}