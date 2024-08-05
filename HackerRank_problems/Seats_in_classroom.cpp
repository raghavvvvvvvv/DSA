/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/seats-in-a-classroomtheater

Problem Statement: Here, We need to write a code to find all the possible ways in which n people can occupy r number of seats in a classroom/theater.
N students are looking to find r seats in a classroom. Some of the seats are already occupied and only a few can accommodate in the classroom. The available seats are assumed as r and n number of people are looking to accommodate within the room.

Input Format: User gives two inputs(number of people and seats).

Constraints: 1 <= N,R <=1000

Output Format: If the number is people are more than the number of seats then print "Cannot adjust n people on r seats" otherwise print all possible arrangements

Sample Input 0: 5 9

Sample Output 0: 15120
*/
#include<iostream>
using namespace std;
int factorial(int n){
    return ((n==1 || n==0) ? 1 : n*factorial(n-1));
}
int main() {
    int n,r;
    cin>>n>>r;
    if(n>r){
        cout<<"Cannot adjust n people on r seats"<<endl;
    }else{
      cout<<(factorial(r)/factorial(r-n));
      
    }
        return 0;
}