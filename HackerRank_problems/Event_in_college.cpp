/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/event-in-psit

Problem Statement: A event is organised in your College. The event is organised for a limited time(T). The number of student entering and leaving the event at every hour is represented as elements of the array. The task is to find the maximum number of students present in the event at any given instance within T hours.

Constraints: 1 <= T <= 100

Input Format:
Input T
Input Number of student entering in the event in a that time limit
Input Number of student leaving in the event in a that time limit

Output Format: Print Maximum number of students in event at any instance.

Sample Input 0:
5
5 1 7 3 8
3 2 4 0 2

Sample Output 0: 13
*/

#include<iostream>
using namespace std;
int main() {
    short int t,max=0,current=0;
    cin>>t;
    int ent[t],lev;
    for(int i=0; i<t; i++){
        cin>>ent[i];
    }
    
    for(int i=0; i<t; i++){
        cin>>lev;
        current = current+ent[i]-lev;
        if (current>max)
            max=current;
    }
    cout<<max;
    return 0;
}