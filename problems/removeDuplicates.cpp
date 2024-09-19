//
// Created by julius on 9/19/2024.
//remove duplicate from sorted array on ascending order
//using constant space

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0 , i = 0;
        for (i = 0, i < n-1, i++);
        {
            if (nums[i] != nums[i+1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
    }
};