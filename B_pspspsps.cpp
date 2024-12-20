#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 500;
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

        string s;
        cin>>s;
        s = " "+s;

        vector<int>a(n+2, n+1);
        for(int i=n; i>=1; i--){
            if(s[i] == 'p'){
                a[i] = i;
            }
            else{
                a[i] = a[i+1];
            }
        }

        vector<int>b(n+1, 0);
        for(int i=1; i<=n; i++){
            if(s[i] == 's'){
                b[i] = i;
            }
            else{
                b[i] = b[i-1];
            }
        }

        vector<int>c(n);
        for(int i=1; i<=n; i++){
            int x = N;
            if(a[i] <= n){
                x = a[i];
            }

            int y = N;
            if(b[i] >= 1){
                y = n-b[i]+1;
            }

            if(x!=N && y!=N){
                c[i-1] = min(x, y);
            }
            else if(x != N){
                c[i-1] = x;
            }
            else if(y != N){
                c[i-1] = y;
            }
            else{
                c[i-1] = n;
            }
        }
        sort(c.begin(), c.end());

        int ans = 1;
        for(int i=1; i<=n; i++){
            if(c[i-1] < i){
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
