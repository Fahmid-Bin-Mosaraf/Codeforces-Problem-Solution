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
        int n;   
        cin>>n;

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int sum = arr[0];
        int i = 1;
        while(i<n){
            sum = (sum+arr[i]) / 2;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}