/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/second-largest-1-2

Objective: WAP to find second largest among three numbers.

Input Format: Take input of three numbers separed by ","(comma)

Constraints:
1<=a,b,c<=100

Output Format: Print second largest number

Sample Input 0: 10,20,30
Sample Output 0: 20
*/
#include<iostream>
using namespace std;
int main() {
    short int a,b,c;
    char ch;
    cin>>a>>ch>>b>>ch>>c;
    if(a>=b && a>=c){
        if(b>=c)
            cout<<b;
        else
            cout<<c;
    }else if(b>=a && b>=c){
        if(a>=c)
            cout<<a;
        else
            cout<<c;
    }else{
        if(a>=b)
            cout<<a;
        else
            cout<<b;
    }   
    return 0;
}