/*
Link: https://leetcode.com/problems/move-zeroes/description/
283. Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
 
Constraints:
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 
Follow up: Could you minimize the total number of operations done?
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Solution Function
void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        auto zeros = count(nums.begin(), nums.end(),0);
        auto end = remove(nums.begin(), nums.end(),0);
        nums.resize(size-zeros);
        nums.resize(size);
    }

//Solution Function 2
void moveZeroes2(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-count; i++){
            if(nums[i]==0){
                count++;
                for(int j=i; j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
            i--;
            }
        }
        for(int i=nums.size()-count; i<nums.size(); i++){
            nums[i]=0;
        }
    }

int main(){
    
    return 0;
}