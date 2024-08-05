/*
// Link: https://www.hackerrank.com/contests/miet2024/challenges/seating-plan-1

Mr. X and Mr. Y are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :
Window Seat : WS
Middle Seat : MS
Aisle Seat : AS
You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

Input Format: First line of input will consist of a single integer T denoting number of test-cases.
Each test-case consists of a single integer N denoting the seat-number.

Constraints:
1<=T<=105
1<=N<=108

Output Format: For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

Sample Input 0: 
2
3
11

Sample Output 0:
AS 10
MS 2
*/
#include<iostream>
using namespace std;
int main() {
   short int T;
    cin>>T;
    for(short int i=0; i<T; i++){
        short int SS,seat;
        cin>>seat;
        SS = seat%12;
        switch(SS){
            case 1:
                cout<<"WS "<<seat+11<<endl;
                break;
            case 2:
                cout<<"MS "<<seat+9<<endl;
                break;
            case 3:
                cout<<"AS "<<seat+7<<endl;
                break;
            case 4:
                cout<<"AS "<<seat+5<<endl;
                break;
            case 5:
                cout<<"MS "<<seat+3<<endl;
                break;
            case 6:
                cout<<"WS "<<seat+1<<endl;
                break;
            case 7:
                cout<<"WS "<<seat-1<<endl;
                break;
            case 8:
                cout<<"MS "<<seat-3<<endl;
                break;
            case 9:
                cout<<"AS "<<seat-5<<endl;
                break;
            case 10:
                cout<<"AS "<<seat-7<<endl;
                break;
            case 11:
                cout<<"MS "<<seat-9<<endl;
                break;
            case 0:
                cout<<"WS "<<seat-11<<endl;
                break;
            default:
                break;
        }
        
    }