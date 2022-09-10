#include<iostream>
using namespace std;

int main(){
    int ar[100];
    int s;
    cout<<"enter thr size of the array ";
    cin>>s;
    for  (int i=0;i<s;i++)
    {
        cin>>ar[i];
    }
    cout<<"you entered the array is   ";
    for (int i=0;i<s;i++)
    {
        
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    int j=s-1;
    for (int i=0;i<j;i++)
    {
        if (ar[i]==0)
        {
            continue;
        }
        else
        {
            ar[i]=0;
            ar[j]=1;
            j=j-1;
        }
    }
    cout<<"array after sorting  ";
    for (int i=0;i<s;i++)
    {   
        cout<<ar[i]<<"  ";
    }

  
    return 0;
}