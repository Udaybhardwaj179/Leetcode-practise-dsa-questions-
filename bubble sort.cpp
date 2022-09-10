#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[10];
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    for (int i=1;i<10;i++){
        for  (int j=0;j<10-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}