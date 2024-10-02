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

        if(n%2 == 0){
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++){
                cout<<2<<" "<<-2<<" ";
            }
            cout<<endl;
        }
        else if(n%2 != 0 && n>3){
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++){
                cout<<-(n-2)/2<<" "<<(n-1)/2<<" ";
            }
            cout<<-(n-2)/2<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}