#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t>>n;
 
    set<int>s;
    set<int>::iterator it;
    for(int i=1; i<=n; i++)
    {
        s.insert(i);
    }
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        for(int i=l; i<=r; i++)
        {
            s.erase(i);
        }
    }
    cout<<s.size()<<endl;
    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
}