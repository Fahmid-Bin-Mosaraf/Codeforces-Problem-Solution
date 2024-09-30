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

 		int left = 1;
        int right = 3*n-1;
        cout<<(n+1)/2<<endl;

 		while(left < right){
 			cout<<left<<" "<< right<<endl;
 			left += 3;
 			right -= 3;
 		}
    }
    return 0;
}