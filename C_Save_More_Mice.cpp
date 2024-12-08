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
        int n, k;
        cin>>n>>k;

        vector<int>x(k);
        for(int i=0; i<k; i++){
            cin>>x[i];
        }
        sort(x.rbegin(), x.rend());

        ll count = 0;
        ll sum = 0;

        for(int i=0; i<k; i++){
            int dis = n-x[i];
            if(sum+dis < n){
                sum += dis;
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}