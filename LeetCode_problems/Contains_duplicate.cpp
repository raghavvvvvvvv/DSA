/*
Link: https://leetcode.com/problems/contains-duplicate/description/
217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

//Solution Function
bool containsDuplicate(vector<int>& nums) {
    set<int> se(nums.begin(), nums.end());
    if(se.size()<nums.size())
        return true;
    return false;      
    }

//Solution Function 2
  bool containsDuplicate2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (auto i=nums.begin();i<nums.end()-1;i++) {
            if (*i==*(i + 1))
                return true;
        }
        return false;
    }
int main(){
    
    return 0;
}