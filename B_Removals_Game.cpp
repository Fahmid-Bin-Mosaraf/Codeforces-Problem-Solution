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

        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int element1 = 0;
        int element2 = 0;
        for(int i=0; i<n; i++){
            if(a[i] == b[i]){
                element1++;
            }
            if(a[i] == b[n-i-1]){
                element2++;
            }
        }
        
        if(element1 == n || element2 == n){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}