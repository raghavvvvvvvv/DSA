/*
Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
33. Search in Rotated Sorted Array
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

Example 3:
Input: nums = [1], target = 0
Output: -1

Constraints:
1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution Function
int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int pivot = maximumPivot(nums, start, end);
    int index = binarySearch(nums, start, pivot - 1, target);
    if (index != -1)
        return index;
    else
        index = binarySearch(nums, pivot, end, target);
    return index;
}

int maximumPivot(vector<int> &nums, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid > start && nums[mid - 1] > nums[mid])
            return mid;
        if (mid < end && nums[mid] > nums[mid + 1])
            return mid + 1;
        if (nums[start] >= nums[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}
int binarySearch(vector<int> &arr, int start, int end, int tar)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[start] == tar)
            return start;
        else if (arr[end] == tar)
            return end;
        else if (arr[mid] == tar)
            return mid;
        else if (tar > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{

    return 0;
}