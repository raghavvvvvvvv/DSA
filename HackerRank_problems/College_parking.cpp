/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/mall-parking
Problem Statement: A parking lot in a college has RxC number of parking spaces. Each parking space will either be empty(0) or full(1). The status (0/1) of a parking space is represented as the element of the matrix. The task is to find number of the row(R) in the parking lot that has the most of the parking spaces full(1).

Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.

Input Format: Input R, C Read data in array

Constraints:
1 <= R,C <=20

Output Format: Print parking lot that has the most of the parking spaces full

Sample Input 0:
3 3
0 1 0 1 1 0 1 1 1

Sample Output 0: 3
*/
#include<iostream>
using namespace std;
int main() {
    int r,c,max=0,row=0;
    cin>>r>>c;
    int current;
    for(int i=0; i<r; i++){
        int count=0;
        for(int j=0; j<c; j++){
            cin>>current;
            if(current==1)
                count++;
        }
        if(count>max){
            max=count;
            row=i+1;
        }
    }
    cout<<row;
    return 0;
}