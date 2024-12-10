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
        int n, x;
        cin>>n>>x;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int sum = 0;
        int count1 = 0;
        int count2 = 1;

        for(int i=0; i<n; i++){
            sum += a[i];
            if(a[i] == x){
                count1 = 1;
            }
            if(a[i] != x){
                count2 = 0;
            }
        }

        if(count2){
            cout<<0<<endl;
        }
        else if(count1 || sum == n*x){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}