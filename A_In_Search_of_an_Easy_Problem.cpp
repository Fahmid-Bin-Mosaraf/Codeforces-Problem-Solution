#include<iostream>
using namespace std;
 
int x(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i] == 1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
 
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    int y = x(a, n);
    if(y == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}