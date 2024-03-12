#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
 
        if(s=="YES" || s=="yES" || s=="YEs" || s=="YeS" || s=="yEs" || s=="yeS" || s=="Yes" || s=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}