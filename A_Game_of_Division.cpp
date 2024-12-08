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

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int ans = 0;
        int index = -1; 

        for(int i=0; i<n; i++){
            int win = 1;
            for(int j=0; j<n; j++){
                if(i!=j && abs(a[i]-a[j]) % k==0){
                    win = 0; 
                    break;
                }
            }
            if(win) {
                ans = 1;
                index = i+1;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
            cout<<index<< endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}