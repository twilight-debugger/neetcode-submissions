class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate;

        for(int i = 0;i < nums.size();i++){
            auto status = duplicate.insert(nums[i]); // insert happened here 
        
            if(!status.second){ 
                return true;
        }
        }
        return false;
    }
};