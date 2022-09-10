#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        int arr[nums.size()];
        int s;
        if (nums.size()==2){
            return false;
        }
        
            
        for (int i=0;i<nums.size()-1;i++){
           
            s=nums[i]+nums[i+1];
            arr[i]=s;
        }
        int c=0;
        int l=sizeof(arr)/sizeof(arr[0]);
        for (int i=0;i<l;i++){
            for (int j=i+1;j<l;j++){
                if(arr[j]==arr[i]){
                    c++;
                }
            }
        }
        if(c>0){
            return true;}

        else{
            return false;
            }
    }
    
};
int main (){
    Solution o;
    vector<int >arr ={1,-4,4};
   int x= o.findSubarrays(arr);
   cout<<x;
}