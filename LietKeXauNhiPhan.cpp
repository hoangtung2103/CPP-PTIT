#include <iostream>
using namespace std;
int n, a[30], check;
void KhoiTao()
{
    for(int i=1;i<=n;i++)
    {
        a[i] = 0;
    }
}
void SinhNhiPhan()
{
    int i = n;
    while(i>=1 && a[i]==1)
    {
        a[i] = 0;
        i--;
    }
    if(i == 0) check = 0;
    else a[i] = 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = 1;
        cin >> n;
        KhoiTao();
        while(check == 1)
        {
            for(int i=1;i<=n;i++) cout<<a[i];
            SinhNhiPhan();
            cout<<" ";
        }
        cout<<endl;
    }
}