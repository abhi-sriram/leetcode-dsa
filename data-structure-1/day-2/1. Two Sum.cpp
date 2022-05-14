class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ind;
        for(int i=0;i<nums.size();i++){
            if(ind.find(target - nums[i])!=ind.end()){
                int index1 = ind[target - nums[i]];
                return {i,index1};
            }
            ind[nums[i]] = i;
        }
        return {};
    }
};
