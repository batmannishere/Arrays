class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        while(right>left){
            int sum= nums[right]+nums[left];
            if(sum>target){
                right--;
            }
             else if(sum<target){
                left++;
            }
            else if(sum==target){
                return {right,left};
            }
            
        }
        return {-1,-1};
            }
    
};