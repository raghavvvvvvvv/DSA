/*
Link: https://leetcode.com/problems/search-a-2d-matrix/description/
74. Search a 2D Matrix
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

Constraints:
m == matrix.length
n == matrix[i].length
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] < target)
        {
            j++;
        }
        else if (matrix[i][j] > target)
        {
            break;
        }
        if (j == n)
        {
            i++;
            j = 0;
        }
    }
    return false;
}

int main(){
    return 0;
    
}