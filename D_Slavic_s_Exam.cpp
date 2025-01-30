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
        string s, t;
        cin>>s>>t;
        
        int n = s.size();
        int m = t.size();

        int j = 0;
        int x = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == t[j] || s[i] == '?'){
                j++;
            }
            if(j == m){
                x = 1;
                break;
            }
        }

        if(!x){
            cout<<"NO"<<endl;
            continue;
        }

        j = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '?'){
                if(j < m){
                    s[i] = t[j++];
                } 
                else{
                    s[i] = 'a';
                }
            }
            else if(s[i] == t[j]){
                j++;
            }
        }
        cout<<"YES"<<endl<<s<<endl;
    }
    return 0;
}