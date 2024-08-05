/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/remove-even-digit

Problem Statement: Andy is working in a XYZ Company. Company assign a task to Andy that design an application that remove all even digits from a number. Help Andy to design this application.

Input Format: Take Number as a input

Constraint:
1 <= N <= 100000

Output Format: Print the number n with all even digits removed. If the original number n contains only even digits, print 0.

Sample Input 0: 12345
Sample Output 0: 135

Sample Input 1: 2482
Sample Output 1: 0
*/
#include<iostream>
#include <cmath>
using namespace std;
int main() {
     int num,new_num=0,dec=-1;;
    cin>>num;
    while(num){
        short rem;
        rem = num%10;
        if(rem%2!=0){
            dec++;
            new_num = new_num +(rem*(pow(10,dec)));
        }
        num/=10;
    };
    cout<<new_num;
    return 0;
}