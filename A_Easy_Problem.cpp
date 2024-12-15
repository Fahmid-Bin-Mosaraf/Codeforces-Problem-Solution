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
        int count = 0;

        for(int i=1; i<n; i++){
            int a = n-i;
            if(a > 0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}