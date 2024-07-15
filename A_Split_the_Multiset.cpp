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
        int n, k;
        cin>>n>>k;

        int result = 0;
        while(n > 1){
            n = n-(k-1);
            result++;
        }
        cout<<result<<endl;
    }
    return 0;
}