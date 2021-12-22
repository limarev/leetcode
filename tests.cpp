#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "two_sum/two_sum.cpp"
#include <unordered_map>

TEST_CASE("Example 1")
{
    Solution s;
    std::vector<int> nums { 2, 7, 11, 15 };
    int target = 9;
    CHECK(s.twoSum(nums, target) == std::vector<int> { 0, 1 });
}

TEST_CASE("Example 2")
{
    Solution s;
    std::vector<int> nums { 3, 2, 4 };
    int target = 6;
    std::unordered_map<int, int> umap;
    umap.insert({ 1, 1 });
    umap.insert({ 1, 2 });

    for (const auto& pair : umap) {
        std::cout << pair.first << " " << pair.second << "\n";
    }

    CHECK(s.twoSum(nums, target) == std::vector<int> { 1, 2 });
}

TEST_CASE("Example 3")
{
    Solution s;
    std::vector<int> nums { 3, 3 };
    int target = 6;
    CHECK(s.twoSum(nums, target) == std::vector<int> { 0, 1 });
}

TEST_CASE("Example 4")
{
    Solution s;
    std::vector<int> nums { 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 7, 1, 1, 1, 1, 1 };
    int target = 11;
    CHECK(s.twoSum(nums, target) == std::vector<int> { 5, 11 });
}