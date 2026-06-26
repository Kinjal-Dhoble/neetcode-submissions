#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement already exists
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // Store the current element and its index
            mp[nums[i]] = i;
        }

        return {};
    }
};

