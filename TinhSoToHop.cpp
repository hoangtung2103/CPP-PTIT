#include <iostream>
using namespace std;
long long mod = 1e9 + 7;
long long a[1005][1005];
int main()
{
    //to hop chap k cua n // i = n , j = k
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==j || j==0) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
            a[i][j] %= mod;
        }
    }

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        cout << a[n][k] << endl; 
    }
}