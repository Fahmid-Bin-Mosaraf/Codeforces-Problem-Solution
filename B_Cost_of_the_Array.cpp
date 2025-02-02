#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void partion(int x, int y, vector<int>& l, vector<int>& a, vector<int>& b, int& ans, int n){
    if(y == 0){
        if(x != n){
            return;
        }

        b.clear();
        int r = 0;
        for(int i=0; i<l.size(); i++){
            if(i%2 == 1){
                for(int j=r; j<l[i]; j++){
                    b.push_back(a[j]);
                }
            }
            r = l[i];
        }
        b.push_back(0);

        int cost = 0;
        while(cost<b.size() && b[cost] == cost+1){
            cost++;
        }
        ans = min(ans, cost + 1);
        return;
    }

    while(x < n){
        l.push_back(x+1);

        int temp1 = x + 1;
        int temp2 = y - 1;
        
        partion(temp1, temp2, l, a, b, ans, n);
        l.pop_back();
        x = temp1;
    }
}

int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        int ans = INT_MAX;
        vector<int>b;
        vector<int>l;
        partion(0, k, l, a, b, ans, n);
        
        cout<<ans<<endl;
    }
    return 0;
}