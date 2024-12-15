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

        set<int>ans;     
        int count = 1; 

        for(int i=0; i<n; i++){
            if(ans.find(a[i]) == ans.end()){
                cout<<a[i]<<" ";
                ans.insert(a[i]);
            } 
            else{
                while(ans.find(count) != ans.end()){
                    count++;
                }
                cout<<count<<" ";
                ans.insert(count);
            }
        }
        cout<<endl;
    }
    return 0;
}