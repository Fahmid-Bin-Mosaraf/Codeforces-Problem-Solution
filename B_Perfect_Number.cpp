#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int k;
    cin>>k;

    int count = 0;
    int ans = 0;
    while(count < k){
        ans++;
        int sum = 0;
        int temp = ans;
        while(temp){
            sum += temp%10;
            temp /= 10;
        }
        if(sum == 10){
            count++;
        }
    }
    cout<<ans<<endl;
    return 0;
}