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
 
        vector<int>fahmid(n+1, 0);
        int result = -1;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(++fahmid[a]>=3)
            {
                result = a;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}