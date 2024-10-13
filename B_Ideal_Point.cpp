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

        int right = 55;
        int left = 0;
        
        while (n--){
            int l, r;
            cin>>l>>r;

            if(l <= k && k<= r){
                right = min(right, r);
                left = max(left, l);
            }
        }
        
        if(right == left){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}