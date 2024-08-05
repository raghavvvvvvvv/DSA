/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/baloon-cost

Problem Statement: You are conducting a contest at your college. This contest consists of two problems and n participants. You know the problem that a candidate will solve during the contest. You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. 
You can distribute balloons to each participant by performing the following operation: Use green-colored balloons for the first problem and purple-colored balloons for the second problem. Use purple-colored balloons for the first problem and green-colored balloons for the second problem. You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Input Format:
First line: T that denotes the number of test cases
For each test case:
First line: Cost of green and purple-colored balloons
Second line: n that denotes the number of participants
Next n lines: Contain the status of users. For example, if the value of the jth integer in the ith row is 0, then it depicts that the ith participant has not solved the jth problem. Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith participant has solved the jth problem.

Constraints:
1 ≤ T ≤10
1 ≤ n ≤ 10

Output Format: For each test case, print the minimum cost that you have to pay to purchase balloons.

Sample Input 0:
2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0

Sample Output 0:
69
14*/
#include<iostream>
using namespace std;

int main() {
    short int t,n;
    cin>>t;
    while(t--){
        short int b1,b2,min=0, max=0,less=0,more=0;
        cin>>b1>>b2;
        (b1 > b2 ? (min=b2,max=b1) : (min=b1, max=b2));
        cin>>n;
        while(n--){
            cin>>b1>>b2;
            less+=b1;
            more+=b2;
        }
        if(more > less)
            cout<<less*max + more *min<<endl;
        else
            cout<<less*min + more*max<<endl;
    }
    return 0;
}