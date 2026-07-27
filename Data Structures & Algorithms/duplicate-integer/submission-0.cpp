class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int, string> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.count(nums[i]) == 1)
        {

            return true;
        }
        else
        {

            m.insert({nums[i], "jdas"});
        }
    }
    return false;
    }
};
