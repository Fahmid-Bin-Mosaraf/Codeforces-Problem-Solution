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
 
        for(int i=3; i<n; i++)
        {
            int x;
            x=(n-i)/2;
            int y=n-i-x;
            if(x>1 && y+1<i)
            {
                x--;
                y++;
            }
            if(i>y && y>x)
            {
                cout<< y << " " << i << " " << x <<endl;
                break;
            }
        }
    }
    return 0;
}