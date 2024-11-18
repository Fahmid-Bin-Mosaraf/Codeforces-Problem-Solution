#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int count = 0;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s =="P"){
            int p;
            cin>>p;

            count += p;
        }
        else if(s == "B"){
            int b;
            cin>>b;
            if(count < b){
                cout<<"YES"<<endl;
                count = 0;
            }
            else{
                cout<<"NO"<<endl;
                count -= b;
            }
        }
    }
    return 0;
}