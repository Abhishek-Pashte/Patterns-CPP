#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)>n)
            cout<<i<<" ";
        }
        cout<<endl;
    }
 // ----------- OR ---------------- //
 /*   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
  */
}
