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

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(n % 2 == 0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
    return 0;
}