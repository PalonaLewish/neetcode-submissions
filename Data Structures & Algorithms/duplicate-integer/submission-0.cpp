class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for(int i =0;i<size(nums);i++){
            if(numSet.find(nums[i]) != numSet.end()){
                return true;
            }
            numSet.insert(nums[i]);
        }
        return false;
    }
};