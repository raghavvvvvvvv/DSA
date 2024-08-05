/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/plus-one-5-2

Problem Statement: You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's. Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Example 2:
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

Example 3:
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

Sample Input 0
3
1 2 3

Sample Output 0:
1 2 4
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int new_num=0,dec;
    cin>>dec;
    while(dec--){
        short digit;
        cin>>digit;
            new_num = new_num +(digit*(pow(10,dec)));
        }
    new_num+=1;
    string number = to_string (new_num);
    for(auto i: number)
        cout<<i<<" ";
    return 0;
}