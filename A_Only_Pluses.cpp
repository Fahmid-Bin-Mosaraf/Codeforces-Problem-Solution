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
        int a, b, c;
        cin>>a>>b>>c;

        for(int i=0; i<5; i++){
            if(a <= b && a <= c){
                a++;
            }
            else if(b <= a && b <= c){
                b++;
            }
            else{
                c++;
            }
        }
        int result = a*b*c;
        cout<<result<<endl;
    }
    return 0;
}