#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;
        
        vector<vector<ll>>a(n+1, vector<ll>(m+1));
        vector<ll>row(n+1, 0);
        vector<ll>column(m+1, 0);

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>a[i][j];

                row[i] += a[i][j];  
                column[j] += a[i][j]; 
            }
        }
        
        ll left = 1;
        ll right = 1;
        
        for(char c : s){
            if(c == 'D'){ 
                ll temp = -row[left];  
                a[left][right] = temp;   
                row[left] = temp + a[left][right];  
                column[right] += temp;     
                left++;
            } 
            else if(c == 'R'){ 
                ll temp = -column[right];  
                a[left][right] = temp;    
                column[right] = temp + a[left][right]; 
                row[left] += temp;      
                right++;
            }
        }
        
        a[n][m] = -column[m]; 
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}