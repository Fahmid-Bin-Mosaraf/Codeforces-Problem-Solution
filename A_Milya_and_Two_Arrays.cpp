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
            cin >> a[i];
        }

        vector<ll>b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        
        set<int>s;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                s.insert(a[i] + b[j]);
                if(s.size() >= 3){
                    cout<<"YES"<<endl;
                    goto next_case;
                }
            }
        }
        
        if(s.size() < 3){
            cout<<"NO"<<endl;
        }
        next_case:;
    }
    return 0;
}