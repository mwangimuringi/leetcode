#include <vector>
#include <iostream>

using namespace std;

class Solutions
{
public:
    static vector<int> twoSum(const vector<int> &nums, int target)
    {
        vector<int> ret;
        int size = nums.size();

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ret.push_back(static_cast<int>(i));
                    ret.push_back(static_cast<int>(j));
                    return ret;
                }
            }
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ret = Solutions::twoSum(nums, target);
    for (int idx : ret) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
