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
        int a, b, x, y, n;
        cin>>a>>b>>x>>y>>n;

        ll a1 = a;
        ll b1 = b;
        ll n1 = n;

        ll red_a = min(n1, a1-x);
        a1 -= red_a;
        n1 -= red_a;

        ll red_b = min(n1, b1-y);
        b1 -= red_b;

        ll ans_1 = a1*b1;

        ll a2 = a;
        ll b2 = b;
        ll n2 = n;

        ll red_b2 = min(n2, b2-y);
        b2 -= red_b2;
        n2 -= red_b2;

        ll red_a2 = min(n2, a2-x);
        a2 -= red_a2;

        ll ans_2 = a2*b2;

        cout<<min(ans_1, ans_2)<<endl;
    }
    return 0;
}