#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int j=1;
    int s=0;
    while(j<=n)
    {
        if (j==n)
        {
            cout<<"true";
            s=s+1;
            break;
        }
        else
        {
            j=j*2;
        }
        
    }
    if(s==0)
    {
        cout<<"fasle";
    }

    return 0;
}