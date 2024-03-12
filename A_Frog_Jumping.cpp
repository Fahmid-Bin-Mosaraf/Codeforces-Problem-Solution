#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    long long int ans;
    int t;
    cin>>t;
    while(t--)
    {
        ans=d=0;
        cin>>a>>b>>c;
 
        if(c%2==1)
        {
            d=(c/2)+1;
        }
        else
        {
            d=c/2;
        }
        ans=(d*a)-((c-d)*b);
        cout<<ans<<endl;
    }
    return 0;
}