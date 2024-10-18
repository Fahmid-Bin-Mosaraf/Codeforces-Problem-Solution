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

        vector<int>p(n);
        for(int i=0; i<n; i++){
            cin>>p[i];
        }

        int count = 1;
        for(int i=0; i<n; i++){
            if(p[i] == count){
                count++;
            }
        }

        cout<<(n-count+k) / k<<endl;
    }
    return 0;
}