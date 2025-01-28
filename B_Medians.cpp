#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;

        if(k==1 || k==n){
            if(n==1 && k==1){
                cout<<"1 1"<<endl;
            } 
            else{
                cout<<"-1"<<endl;
            }
        } 
        else{
            cout<<"3\n1 ";
            if(k%2 == 0){
                cout<<k<<" "<<k+1<<endl;
            }
            else{
                cout<<k-1<<" "<<k+2<<endl;
            }
        }
    }
    return 0;
}