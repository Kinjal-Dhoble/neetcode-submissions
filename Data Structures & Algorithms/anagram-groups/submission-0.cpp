#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        // Traverse each string
        for (string str : strs) {

            // Create a sorted copy of the string
            string key = str;
            sort(key.begin(), key.end());

            // Store original string in the corresponding group
            mp[key].push_back(str);
        }

        // Store the answer
        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};