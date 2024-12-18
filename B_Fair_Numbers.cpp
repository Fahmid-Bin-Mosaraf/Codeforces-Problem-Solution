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
        ll n;
        cin>>n;
        while(true){
            ll temp = n;
            int ans = 1;

            while(temp > 0){
                int x = temp%10;
                temp /= 10;
                if(x!=0 && n%x != 0){
                    ans = 0;
                    break;
                }
            }
            if(ans){
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}