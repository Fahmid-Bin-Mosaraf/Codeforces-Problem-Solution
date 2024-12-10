#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        vector<ll>b;
        b.push_back(a[0]);

        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]){
                b.push_back(a[i]);
            }
        }

        int ans = 0;
        for(int i=0; i<b.size(); i++){
            if((i==0 || b[i]<b[i-1]) && (i==b.size()-1 || b[i]<b[i+1])){
                ans++;
            }
        }

        if(ans == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}