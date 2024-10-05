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
        int n, x, y;
        cin>>n>>x>>y;

        if(x>y){
            swap(x,y);
        }
        if(x!=0 || y==0 || (n-1) % y!=0){
            cout<<-1<<endl;
            continue;
        }

        vector<int>arr;
        for(int i=2; i<=n; i+=y){
            for(int j=0;j<y; j++){
                arr.push_back(i);
            }
        }
        for(int i=0; i<arr.size(); i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}