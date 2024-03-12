#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>> s >> t;
    int w = 0;
 
    for(int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(s[i] == t[j])
            w++;
        else
            break;
    }
    cout<<s.size() - w + t.size() - w<<endl;
}