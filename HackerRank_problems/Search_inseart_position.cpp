/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/search-insert-position-1-4

Objective
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

Example 1:
Input: nums = [1,3,5,6], target = 5 Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2 Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7 Output: 4

Input Format:
First line take an input of N
Second Line take input of N elements
Third line take input of target element

Constraints:
1 <= arr.length <= 100000
-100000 <= arr[i] <= 100000
arr contains distinct values sorted in ascending order.
-100000 <= target <= 100000

Output Format: Display the result

Sample Input 0:
4
1 3 5 6
5

Sample Output 0: 2
*/
#include<iostream>
using namespace std;


int binary_search(int n,int *arr, int tar){
    int start=0, end = n;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[start]==tar)
            return start;
        else if(arr[end]==tar)
            return end;
        else if(arr[mid]==tar)
            return mid;
        else if (tar>arr[mid])
            start = mid+1;
        else if (tar<arr[mid])
             end = mid-1;    
    }
    return start;
}

int main() {
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
    int res = binary_search(n, arr, target);
    cout<<res;
    return 0;
}