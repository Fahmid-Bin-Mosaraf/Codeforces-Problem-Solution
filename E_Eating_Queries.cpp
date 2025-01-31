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
        int n, q;
        cin>>n>>q;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<int>());

        for(int i=1; i<n; i++){
            a[i] = a[i] + a[i-1];
        }

        int sum = 0;
        int x;

        for(int i=0; i<q; i++){
            cin>>x;
            if(x > a[n-1]){
                cout<<-1<<endl;
            }
            else{
                cout<<(lower_bound(a.begin(), a.end(), x)-a.begin()+1)<<endl;
            }
        } 
    }
    return 0;
}
