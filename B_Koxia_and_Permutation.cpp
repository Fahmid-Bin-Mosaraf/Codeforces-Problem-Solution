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
        int n, k;
        cin>>n>>k;

        int l = 1;
        int r = n;

        for(int i=0; i<n; i++){
            if(i%2 == 0){
                cout<<r--<<" ";
            }
            else{
                cout<<l++<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}