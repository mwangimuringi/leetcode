#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int cnt = 0, ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                cnt ^= (1 << (s[i] - 'a'));  // Toggle the bit corresponding to the vowel
            }

            // Check if this bitmask has been seen before
            if (mp.find(cnt) != mp.end()) {
                ans = max(ans, i - mp[cnt]);
            } else {
                mp[cnt] = i;
            }
        }
        return ans;
    }
};

