class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {

        if (1 == m.count(target - nums[i]))
        {
            // cout << m.at(target - nums[i]) << " + " << i << endl;
            return {m.at(target - nums[i]), i};
            // break;
        }

        else
        {

            m.insert({nums[i], i});
        }
    }
    return {0, 0};
    }
};
