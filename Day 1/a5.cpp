class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            x=nums[i];
            for(int j=i+1;j<n;j++){
               y=nums[j];
               if(x+y==target){
                   ans.push_back(i);
                   ans.push_back(j);
                  break;
               }  
            }
        }
        return ans;
    }
};
