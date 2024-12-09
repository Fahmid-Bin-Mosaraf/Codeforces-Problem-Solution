#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    string s[n];
    char letters1, letters2; 
    int ans = 1;

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    letters1 = s[0][0];
    letters2 = s[0][1];

    if(letters1 == letters2){
        ans = 0;
    }
    else{
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i==n-j-1){
                    if(s[i][j] != letters1){
                        ans = 0;
                        break;
                    }
                }
                else{
                    if(s[i][j] != letters2){
                        ans = 0;
                        break;
                    }
                }
            }
            if(!ans){
                break;
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}