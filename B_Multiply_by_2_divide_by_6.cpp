#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0, y=0;
        while(n % 2 == 0)
        {
            n /= 2;
            x++;
        }
        while(n % 3 == 0)
        {
            n/=3;
            y++;
        }
        if(n == 1 && x <= y)
            cout<<2 * y - x<<endl;
        else
            cout<< -1 << endl;
    }
    return 0;
}