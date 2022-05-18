class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        
        int j=0;
        for(int x=0; x<m[0]; x++){
            nums[j]=0;
            j++;
        }
        
        for(int x=0; x<m[1]; x++){
            nums[j]=1;
            j++;
        }
        
        for(int x=0; x<m[2]; x++){
            nums[j]=2;
            j++;
        }
    }
};
