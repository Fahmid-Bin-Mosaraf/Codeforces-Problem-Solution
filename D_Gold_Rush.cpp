#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

bool isPossible(int n, int m){
	if(n == m){
        return true;
    }
	else if(n%3 != 0){
        return false;
    }
	else{
        return (isPossible(n/3, m) || isPossible(2*n/3, m));
    }
}

int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        if(isPossible(n, m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}