#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int>x(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    sort(x.begin(), x.end());

    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;

        int left = 0;
        int right = n;
        
        while(left < right){
            int mid = (left+right) / 2;
            if(x[mid] <= m){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        cout<<left<<endl;
    }
    return 0;
}