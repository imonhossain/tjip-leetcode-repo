class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenNumbers;
        for(int i =0; i<nums.size(); i++){
            int remaining = target - nums[i];
            if(seenNumbers.count(remaining)){
                return {seenNumbers[remaining], i};
            }
            seenNumbers[nums[i]] = i;
        }
        return {};

    }
};