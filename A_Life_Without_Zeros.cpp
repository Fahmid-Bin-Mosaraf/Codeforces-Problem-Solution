#include <bits/stdc++.h>
using namespace std;
#define ll long long            

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int removeZero(int n){
    int x = 0;
    int y = 1;
    while(n){
        int digit = n%10;
        n /= 10;
        if(digit){
            x += digit*y;
            y *= 10;
        }
    }
    return x;
}

int main(){
    fast_io();
    int a, b, c;
    cin>>a>>b>>c;

    c = a+b;
    a = removeZero(a);
    b = removeZero(b);
    c = removeZero(c);

    if(a+b == c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
