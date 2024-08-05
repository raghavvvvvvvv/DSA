/*
Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
128. Longest Consecutive Sequence
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 
Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

//Solution FUnction
int longestConsecutive(vector<int>& nums) {
     set<int> s1(nums.begin(),nums.end());
     nums=vector<int>(s1.begin(), s1.end());
     if (nums.empty())
        return 0;
     int count=0, longest=0;
     for(int i=1; i<nums.size();i++){
        if((nums[i-1]+1 == nums[i]) || (nums[i-1] == nums[i])){
            count++;
            longest=max(count,longest);
        }else{
            count=0;
        }
     }   
     return longest+1;
    }

int main(){
    
    return 0;
}