#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, cnt1 = 0, cnt2 = 0;;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            cnt1++;
        }
        else if(s[i] == 'D')
        {
            cnt2++;
        }
    }
    if(cnt1 > cnt2)
    {
        cout<<"Anton"<<endl;
    }
    else if(cnt1 < cnt2)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}