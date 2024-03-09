#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int con=1;
 
    for(int i=1; i<=s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            con++;
            if(con==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            con=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}