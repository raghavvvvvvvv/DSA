/*
Link: https://leetcode.com/problems/max-consecutive-ones/description/

485. Max Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2

Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Solution Function
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_count=0;
        for(int i=0;i<nums.size();i++){
            (nums[i]==1 ? count++ : count=0);
            if(max_count<count)
                max_count=count;
        }

        return max_count;
    }
int main(){
    
    return 0;
}