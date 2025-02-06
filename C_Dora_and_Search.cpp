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

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int left = 0; 
        int right = n-1;
        int minimum = 1;
        int maximum = n;

        while(left <= right){
            if(a[left] == minimum){
                left++;
                minimum++;
            } 
            else if(a[left] == maximum){
                left++;
                maximum--;
            } 
            else if(a[right] == minimum){
                right--;
                minimum++;
            } 
            else if(a[right] == maximum){
                right--;
                maximum--;
            } 
            else{
                break;
            }
        }
        
        if(left <= right){
            cout<<left+1<<" "<<right+ 1<<endl;
        } 
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}