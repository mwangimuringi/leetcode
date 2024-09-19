//
// Created by julius on 9/19/2024.
//remove duplicate from sorted array on ascending order
//using constant space

#include <vector>
#include <bits/streambuf_iterator.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> original;
        vector<int> :: iterator i;
        for(i = nums.begin(); i != nums.end(); i++)
        {
            int elem = *i;
            if(find(original.begin(), original.end(), elem) != original.end()){
                nums.erase(i);
                i--;
            }
            else {
                original.push_back(*i);
            }
        }
        return nums.size();
    }
};