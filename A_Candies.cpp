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

        for(int k=2; k<30; k++){
            int sum = pow(2,k)-1;
            if(n%sum == 0){
                cout<<n/sum<<endl;
                break;
            }
        }
    }
    return 0;
}