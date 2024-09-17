#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    int total_sum = 0;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total_sum += arr[i];
    }
    sort(arr.begin(), arr.end());

    int sum = 0, count = 0;
    for(int i=n-1; i>=0; i--){
        sum += arr[i];
        count++;
        if(sum > total_sum / 2){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}