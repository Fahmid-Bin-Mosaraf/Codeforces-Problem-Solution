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

        int count = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                count += 2;
                i++;
            }
        }
        if(n>1 && s[n-1] == '0' && count>0){
            count--;
        }
        cout<<count<<endl;
    }
    return 0;
}