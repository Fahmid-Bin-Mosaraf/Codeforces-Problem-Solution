#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int result = 1 + ((a < b) ^ ((b - a)&1));
        if(a == b)
            cout<<0<<endl;
        else
            cout<<result<<endl;
    }
}