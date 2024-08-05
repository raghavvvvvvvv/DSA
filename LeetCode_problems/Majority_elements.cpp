/*
Link: https://leetcode.com/problems/majority-element/description/
169. Majority Element
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
*/
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {    //Solution 1
	int maj=floor(nums.size()/2);
	map<int,int> mp;
	for(int i=0; i<nums.size(); i++){
		mp[nums[i]]++;
		if(mp[nums[i]]>maj){
			return nums[i];
		}
	}
    return -1;
    }

int majorityElement2(vector<int>& nums) {   //Solution 2
	int maj=floor(nums.size()/2);
	set<int> st(nums.begin(), nums.end());
	for(auto i: st){
		// cout<<i<<' ';
		if(count(nums.begin(),nums.end(),i)>maj){
			return i;
		}
	}
	return -1;
    }