#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a, x=0;
    cin>>a;
    string s;
 
    for(int i=0; i<a; i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;
}