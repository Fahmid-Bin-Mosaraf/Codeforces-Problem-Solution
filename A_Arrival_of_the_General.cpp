#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], x=0, y=101, maximum, minimum;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>x)
        {
            x=arr[i];
            maximum=i;
        }
        if(arr[i]<=y)
        {
            y=arr[i];
            minimum=i;
        }
    }
    if(maximum>minimum)
    {
        minimum++;
    }
    cout<<maximum+(n-1)-minimum;
}
