// Code

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] == target - nums[j])
                    return {i, j};
            }
        }
        return {};
    }
};
