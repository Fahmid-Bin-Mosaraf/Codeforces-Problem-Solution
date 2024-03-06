#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll sum = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '+'){
                sum++;
            }
            else{
                sum--;
            }
        }
        cout<<abs(sum)<<endl;
    }
    return 0;
}