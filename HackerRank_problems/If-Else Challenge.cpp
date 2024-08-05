/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/c-if-else-2
Task: Given an integer, n, perform the following conditional actions:
If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not n is weird.

Input Format: A single line containing a positive integer, n.

Constraints:
1 <= n <= 100

Output Format: Print Weird if the number is weird; otherwise, print Not Weird.

Sample Input 0: 3
Sample Output 0: Weird

Sample Input 1: 24
Sample Output 1: Not Weird
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n%2!=0 || (n>5 && n<=20))
        cout<<"Weird";
    else
        cout<<"Not Weird";
    return 0;
}