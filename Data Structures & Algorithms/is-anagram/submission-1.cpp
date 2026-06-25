#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> freq(26, 0);

        // Count characters in s
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Subtract counts using t
        for (char ch : t) {
            freq[ch - 'a']--;
        }

        // Check if all frequencies are zero
        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};

