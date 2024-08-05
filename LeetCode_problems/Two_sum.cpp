/*
Link: https://leetcode.com/problems/two-sum/description/
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //Solution 1
        auto i=0;
        auto j=nums.size()-1;
        vector<int> res;
        while(i<j){
            int val=target-nums[i];
            auto idx=find(nums.begin()+i+1,nums.end(),val);
            if(idx!=nums.end()){
                cout<<nums[i]<<' '<<nums[distance(nums.begin(),idx)]<<endl;
                res.push_back(distance(nums.begin(),idx));
                res.push_back(i); 
                break;
            }
            i++;
        }
        return res;
    }

    vector<int> twoSum2(vector<int>& nums, int target) { //Solution 2
        unordered_map<int, int> m{};
        for(int i = 0; i < nums.size(); ++i) {
            if(m.count(target - nums[i])) return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    return 0;
}