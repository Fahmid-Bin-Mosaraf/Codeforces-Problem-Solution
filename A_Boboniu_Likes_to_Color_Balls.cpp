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
        ll r, g, b, w;
        cin>>r>>g>>b>>w;

        ll count = (r%2) + (g%2) + (b%2) + (w%2);
        if(count <= 1){
            cout<<"Yes"<<endl;
        }
        else if(r>0 && g>0 && b>0){
            r -= 1;
            g -= 1;
            b -= 1;
            w += 1;

            count = (r%2) + (g%2) + (b%2) + (w%2);
            if(count <= 1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}