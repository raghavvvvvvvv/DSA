/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/best-time-to-buy-and-sell-stock-4-1

Objective: You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. You have to solve same problem on leetcode platform.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5. Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

Input Format:
First Line take an input on n
Second Line take an input of n price

Constraints:
1 <= prices.length <= 100000 0 <= prices[i] <= 10000

Output Format: Print the maxprofit

Sample Input 0:
6
7 1 5 3 6 4

Sample Output 0: 5
*/
#include<iostream>
using namespace std;
int main() {
   int n;
    cin>>n;
    int arr;
    int minium = 32758, max_p = 0, res=0;
    for(int i=0; i<n; i++){
        cin>>arr;
            res = 0;
            minium = min(minium, arr);
            res = arr - minium;
            max_p = max(res, max_p);

    }
    cout<<(max_p > 0 ? max_p : 0);
    return 0;
}