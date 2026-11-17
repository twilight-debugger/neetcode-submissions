class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;

        for(int i = 0; i <= nums.size(); i++){
            int x = target - nums[i];
            if(umap.find(x)!= umap.end()){ // found case
                return {umap[x],i};
                
            }else {  // not found case
                umap[nums[i]] = i;
            }
        }
        return {-1,-1};
        
    }
};
