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
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        vector<int> cnt(7, 0);
        for(char c:s){
            if(c == 'A'){
                cnt[0]++;
            }
            else if(c == 'B'){
                cnt[1]++;
            }
            else if(c == 'C'){
                cnt[2]++;
            }
            else if(c == 'D'){
                cnt[3]++;
            }
            else if(c == 'E'){
                cnt[4]++;
            }
            else if(c == 'F'){
                cnt[5]++;
            }
            else if(c == 'G'){
                cnt[6]++;
            }
        }
        
        int ans = 0;
        for(int i=0; i<7; i++){
            int min_problem  = m-cnt[i];
            if(min_problem > 0){
                ans += min_problem;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}