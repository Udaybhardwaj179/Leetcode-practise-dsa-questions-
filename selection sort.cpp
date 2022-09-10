#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string arr[5];
    string s;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int m=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[m]){
                m=j;
            }
        }
        swap(arr[i],arr[m]);
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}