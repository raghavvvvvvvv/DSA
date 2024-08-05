/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/shaking-hands-2-1
Objective: Six business people meet for lunch and shake hands with each other.
How many handshakes are there?

Example: If two people shake hands there is one handshake. If three people shake hands there are 3 handshakes. If four people shake hands there are 3 more handshakes so 3 + 3 = 6 in total. If five people shake hands there are another 4 handshakes so 6 + 4 = 10. For 6 people there are another 5 handshakes so 10 + 5 = 15.

Input Format:
First Line will take input of number of person

Constraints:
2<=N<=100

Output Format: Display total number of handshakes

Sample Input 0: 5
Sample Output 0: 10
*/
#include<iostream>
using namespace std;
int main() {
     int n;
    cin>>n;
    if(n>1){
    cout<<(n*(n-1))/2<<endl;
    }else{
        cout<<"0\n";
    }
    return 0;
}