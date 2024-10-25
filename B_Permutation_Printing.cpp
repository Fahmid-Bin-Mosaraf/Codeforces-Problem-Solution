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

        int count1 = 1;
        int count2 = n;

        for(int i=1; i<=n; i++){
            if(i & 1){
                cout<<count1<<" ";
                count1++;
            }
            else{
                cout<<count2<<" ";
                count2--;
            }
        }
        cout<<endl;
    }
    return 0;
}