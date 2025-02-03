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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count = n-1;
        for(int i=1; i+1<n; i++){
            if(s[i-1] == s[i+1]){
                count--;
            }
        }
        cout<<count<<endl; 
    }
    return 0;
}