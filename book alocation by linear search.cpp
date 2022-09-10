#include<iostream>
using namespace std;

int main(){
    int ar[4] = {10,20,30,40};
    int ap[3]={};
    int sum=0;
    int s1=0,s2=0;
    for (int i=0;i<4;i++)
    {
        sum=sum+ar[i];
    }
    for (int i=0;i<4;i++)
    {
        s1=ar[i]+s1;
        s2=sum-s1;
        if (s1>s2)
        {
            ap[i]=s1;
        }
        else
        {
            ap[i]=s2;
        }
       
    }
    for (int i=0;i<3;i++)
    {
        cout<<ap[i]<<endl;
    }

    return 0;
}