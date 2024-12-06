#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int five = 0;
    int zero = 0;

    for(int i=0; i<n; i++){
        if(a[i] == 5){
            five++;
        }
        else{
            zero++;
        }
    }

    if(zero == 0){
        cout<<-1<<endl;
    }
    else if(five < 9){
        cout<<0<<endl;
    }
    else{
        five -= five%9;
        for(int i=0; i<five; i++){
            cout<<5;
        }
        for(int i=0; i<zero; i++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}