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
    for (int p=0;p<s;p++)
    {
        int c=0;
        for (int k=0;k<s;k++)
        {
            if (ar[p]==ar[k])
            {
                c=c+1;
            }
        }
        if (c==2)
        {
            cout<<"tere maa ka coda maru chor "<<ar[p];
            break;
        }
        else
        {
            continue;
        }
    }
  
    return 0;
}