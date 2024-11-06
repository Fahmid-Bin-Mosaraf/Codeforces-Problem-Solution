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
        int q;
        cin>>q;

        vector<int>a;
        int count = 0;

        for(int i=0; i<q; i++){
            int b;
            cin>>b;

            int temp = count;
            if(a.size() > 0 && a.back() > b){
                temp += 1;
            }
            
            if(temp == 0 || temp == 1 && b <= a[0]){
                a.push_back(b);
                count = temp;
                cout<<'1';
            }
            else{
                cout<<'0';
            }
        }
        cout<<endl;
        
    }
    return 0;
}