class Solution {
public:
 void solve(vector<vector<int>> &ans,vector<int>nums, vector<int>v, int index){
     if (index>=nums.size()){
        ans.push_back(v);
        return;      
     }
     {
         solve(ans,nums,v,index+1);
         v.push_back(nums[index]);
         solve(ans,nums,v,index+1);    
         
     }
     
 }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(ans, nums,v,0);
        return ans;
    }
};
