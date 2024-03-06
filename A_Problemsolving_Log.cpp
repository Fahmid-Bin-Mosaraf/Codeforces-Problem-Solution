#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        vector<int> mono(26, 0);
        int ans = 0;
        for(int i=0; i<n; i++){
            mono[s[i] - 'A']++;
            if(mono[s[i] - 'A'] == s[i] - 'A' +1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}