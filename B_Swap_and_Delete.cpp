#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
 
        int n = s.size();
        vector<int>c(2, 0);
 
        for(int i=0; i<n; i++){
            if(s[i] != s[i-1]){
                c[s[i] - '0']++;
                i++;
            }
        }
        int mc = min(c[0], c[1]);
        cout<<mc<<endl;
    }
}