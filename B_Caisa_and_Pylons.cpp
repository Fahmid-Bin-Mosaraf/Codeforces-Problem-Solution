#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;
    
    vector<int>h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }

    int dollar = h[0];
    int x = 0;
    
    for(int i=0; i<n-1; i++){
        x += h[i] - h[i+1];
        if(x < 0){
            dollar += -x;
            x = 0;
        }
    }
    cout<<dollar<<endl;
    return 0;
}