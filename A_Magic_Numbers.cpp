#include<bits/stdc++.h>
using namespace std;
 
bool Magic(string n)
{
    int len = n.length();
    int i = 0;
 
    while (i < len)
    {
        if (n[i] == '1')
        {
            if (i + 1 < len && n[i + 1] == '4')
            {
                if (i + 2 < len && n[i + 2] == '4')
                {
                    i += 3;
                }
                else
                {
                    i += 2;
                }
            }
            else
            {
                i++;
            }
        }
        else
        {
            return false;
        }
    }
 
    return true;
}
 
int main()
{
    string n;
    cin >> n;
 
    if (Magic(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}