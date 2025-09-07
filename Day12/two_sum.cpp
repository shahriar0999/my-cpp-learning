// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> seen;
    for (int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()){
            return {seen[complement], i};
            break;
        }
        seen[nums[i]] = i;
    }
    return {};
    }

};