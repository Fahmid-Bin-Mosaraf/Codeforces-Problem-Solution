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
        ll a, b;
        cin>>a>>b;

        if(a == b){
            cout<<0<<endl;
            continue;
        }

        if(a > b){
            swap(a, b);
        }

        ll x = b/a;
        if(b%a != 0){
            cout<<-1<<endl;
            continue;
        }

        ll y = 0;
        while(x%8 == 0){
            x /= 8;
            y++;
        }

        while(x%4 == 0){
            x /= 4;
            y++;
        }

        while(x%2 == 0){
            x /= 2;
            y++;
        }
        
        if(x == 1){
            cout<<y<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}