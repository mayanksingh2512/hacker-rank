class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>numSet;
        int num;
        for(int i=0;i<nums.size();i++)
        numSet.insert(nums[i]);
        for (int i=0;i<nums.size();i++)
        {
            num=nums[i];
      numSet.insert(reversed(num));
        }

    return numSet.size();
  }
