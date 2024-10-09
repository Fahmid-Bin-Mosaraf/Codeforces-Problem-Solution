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
        string s;
        cin>>s;

        int zero = 0;
        int one = 0;
        for(char i : s){
            if(i == '0'){
                zero++;
            }
            else{
                one++;
            }
        }
        
        int minimum = min(zero, one);
        if(minimum % 2 == 1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}