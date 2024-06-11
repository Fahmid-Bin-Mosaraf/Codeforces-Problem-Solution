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

        int a = 0;
        int b = 2;

        for(int i=2; i<=n; i++){
            int ans = n / i;
            int sum = i * ans * (ans+1) / 2;

            if(sum > a){
                a = sum;
                b = i;
            }
        }
        cout<<b<<endl;
    }
    return 0;
}