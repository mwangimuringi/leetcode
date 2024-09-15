/*
Input: s = "eleetminicoworoep"
Output: 13
Explanation: The longest substring is "leetminicowor" which contains two each of the vowels: e, i and o and zero of the vowels: a and u.
*/

/* xor a^0 =a a^a=0*/
#include <string>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<int, int>mp;
        mp[0] = 1;
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' || s [i] == 'e' || s [i] == 'i' || s [i] == 'o' || s [i] == 'u')
                cnt = cnt^(1<<((int)(s[i] - 'a')));
            if(mp.count(cnt))
            {
                ans = max(ans, i - mp[cnt]);
            }
            else
                mp[cnt] = i;
        }
        return ans;
    }
};

