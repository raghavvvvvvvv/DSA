/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/array-challenge-2-2

Problem Statement: Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
Note : 1st element of the array should be considered in the count of the result.

Input Format:
Input Size i.e N Read N elementes in an array

Constraints:
1 <= N <=100

Output Format: Print count of elements whose value is greater than all of its prior elements

Sample Input 0:
5
7 4 8 2 9

Sample Output 0: 3
*/
#include<iostream>
using namespace std;
int main() {
    short int t;
    cin>>t;
    int current, max=0,count=0;
    for(int i=0; i<t;i++){
        cin>>current;
        if(current>max){
            max=current;
            count++;
        }
    }
    cout<<count;
    return 0;
}