#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll height = 0;
        ll width = 0;

        for(int i=0; i<n; i++){
            ll w, h;
            cin>>w>>h;

            width = max(w,width);
            height = max(h,height);
        }
        cout<<2*(width+height)<<endl;
    }
    return 0;
}