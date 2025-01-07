#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, k;
    cin>>n>>k;

    int h[200005];
    for(int i=0; i<n; i++){
        cin>>h[i];
    }

    int sum = 0;
    for(int i=0; i<k; i++){
        sum += h[i];
    }

    int minimum = sum;
    int ans = 0;

    for(int i=k; i<n; i++){
        sum += h[i] - h[i-k];
        if(sum < minimum){
            minimum = sum;
            ans = i - k + 1;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}