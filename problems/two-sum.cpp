#include <unordered_map>
#include <vector>

using namespace std;

    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
            vector<int> ret;
            int size = nums.size();
            int diff;
            unordered_map<int, int> map;
            for (int i = 0; i < size; i++)
            {
                diff = target - nums[i];
                if (map.find(diff) != map.end() && map.find(diff) -> second != i) {
                    ret.push_back(i);
                    ret.push_back(map.find(diff) -> second);
                    return ret;
                }
                map[nums[i]] = i;
            };
            return ret;
        }
    };

