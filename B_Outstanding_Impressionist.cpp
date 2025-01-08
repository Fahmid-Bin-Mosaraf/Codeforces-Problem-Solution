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

        vector<int>l(n+1);
        vector<int>r(n+1);

        vector<int>sum(2*n+1, 0);
        vector<int>count(2*n+1, 0);

        for(int i=1; i<=n; ++i){
            cin>>l[i]>>r[i];

            if(l[i] == r[i]){
                sum[l[i]] = 1;
                count[l[i]]++;
            }
        }

        for(int i=1; i<=2*n; i++){
            sum[i] += sum[i-1];
        }

        for(int i=1; i<=n; i++){
            if(l[i] == r[i]){
                if(count[l[i]] <= 1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            else{
                int x = sum[r[i]] - sum[l[i]-1];
                if(x < (r[i]-l[i]+1)){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}