#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int count25 = 0;
    int count50 = 0;
    int ans = 1;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(x == 25){
            count25++;
        }
        
        else if(x == 50){
            if(count25 > 0){
                count25--;
                count50++;
            }
            else{
                ans = 0;
                break;
            }
        }

        else if(x == 100){
            if(count50 > 0 && count25 > 0){
                count50--;
                count25--;
            }
            else if(count25 >= 3){
                count25 -= 3;
            }
            else{
                ans = 0;
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