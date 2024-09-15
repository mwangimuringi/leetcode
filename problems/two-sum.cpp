#include <vector>
#include <iostream>

using namespace std;

class Solutions
{
public:
    static vector<int> twoSum(const vector<int> &nums, int target)
    {
        vector<int> ret;
        // Use size_t for indexing
        size_t size = nums.size();

        for (size_t i = 0; i < size - 1; i++)
        {
            for (size_t j = i + 1; j < size; j++)  // Avoid comparing the same element with itself
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
    vector<int> result = Solutions::twoSum(nums, target);

    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
