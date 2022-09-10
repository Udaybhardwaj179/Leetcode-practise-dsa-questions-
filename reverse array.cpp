#include <iostream>
using namespace std;
#include<vector>
vector <int> reverse(vector <int> &v){
    int s=0;
   int e=v.size()-1;
   while ((s<=e))
   {
    swap(v[s++],v[e--]);
   }
   return v;

}
int main() {
    vector <int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(13);
    v.push_back(12);
    v.push_back(3);
    vector<int >v1=reverse(v);
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    if (v1== v){
        cout<<"yes";
    }
    else{
        cout<<" no";
    }



}