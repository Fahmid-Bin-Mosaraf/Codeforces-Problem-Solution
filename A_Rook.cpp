#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
 
        char column = s[0];
        char row = s[1];
 
        for(char i = '1'; i<= '8'; i++)
        {
            if(i != row)
            {
                cout<<column<<i<<endl;
            }
        }
        for(char i = 'a'; i <= 'h'; i++)
        {
            if(i != column)
            {
                cout<<i<<row<<endl;
            }
        }
    }
    return 0;
}