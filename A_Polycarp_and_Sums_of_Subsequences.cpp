#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int t;
    cin>>t;
 
    while(t--)
    {
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        int a = arr[0];
        int b = arr[1];
        int c = arr[6] - arr[0] - arr[1];
 
        cout<< a <<" "<< b << " "<< c << endl;
    }
    return 0;
}