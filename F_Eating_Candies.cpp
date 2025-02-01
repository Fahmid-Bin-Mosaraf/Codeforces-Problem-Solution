#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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

        vector<int>w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
        }

        int left = 0;
        int right = n-1;
        int left_sum = w[0];
        int right_sum = w[n-1];
        int ans = 0;

        while(left < right){
            if(left_sum == right_sum){
                ans = max(ans, left+1 + n-right);
            }
            if(left_sum < right_sum){
                left++;
                left_sum += w[left];
            }
            else{
                right--;
                right_sum += w[right];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}