#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;
    cin>>s;

    cout<<s;

    reverse(s.begin(), s.end());

    cout<<s<<endl;
    return 0;
}