class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it: nums){
            m[it]++;
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>=1){
                m[nums[i]]=0;
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};
