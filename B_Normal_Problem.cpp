#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        string a, b = "";
        cin>>a;

        for(int i=a.size()-1; i>=0; i--){
            if(a[i] == 'p'){
                b += 'q';
            }
            else if(a[i] == 'q'){
                b += 'p';
            }
            else if(a[i] == 'w'){
                b += 'w';
            }
        }
        cout<<b<<endl;
    }
    return 0;
}