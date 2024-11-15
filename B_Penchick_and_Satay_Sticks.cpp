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
        int n;
        cin>>n; 

        vector<int>a(n); 
        for(int i=0; i<n; i++){ 
            cin>>a[i];
        }
        
        int ans = 1; 
        
        for(int i=1; i<n; i++){
            if(a[i-1] > a[i] && abs (a[i] - a[i-1]) == 1){
                swap(a[i-1],a[i]);
                i++;
            }
            else if(a[i-1] <= a[i]){
                i++;
            }
            else{
                ans = 0;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
