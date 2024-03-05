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
 
        string s;
        cin>>s;
 
        int a = -1, b = -1;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                if(a == -1)
                a = i;
                b = i;
            }
        }
 
        if(a == -1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-a+1<<endl;
        }
    }
    return 0;
}