#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::map<int, int> map;
        for (auto i = 0; i < nums.size(); ++i) {
            auto [it, ok] = map.insert({ target - nums[i], i });
            if (!ok && it->first == nums[i])
                return std::vector<int> { it->second, i };
        }

        for (auto i = 0; i < nums.size(); ++i) {
            auto finded = map.find(nums[i]);
            if (finded->second == i || finded == map.end())
                continue;
            return std::vector<int> { i, finded->second };
        }

        return std::vector<int> { 1, 1 };
    }
};