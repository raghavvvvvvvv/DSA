/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/day-calculation-from-date/
Problem Statement: Mr. Rijul want to create an application to calculate the day of the week on which someone was born or some other special event occurred. He want to use Zeller’s Rule for calculating the day of the week for a given date.

Zeller’s Rule: F=k+ [(13*m-1)/5] +D+ [D/4] +[C/4]-2*C where
k is the day of the month.
m is the month number.
D is the last two digits of the year.
C is the first two digits of the year.

Note: According to Zeller’s rule the month is counted as follows:
March is 1, April is 2….. January is 11 and February is 12.
So the year starts from March and ends with February. So if the given date has month as January or February subtract 1 from the year.
For example: For 1st January 1998 subtract 1 from 1998 i.e. 1998-1=1997 and use 1997 for calculating D.
Discard all the decimal values and then find the final value of F.

After getting the value of F, divide it by 7.The value of F can be either positive or negative. If it is negative, let us suppose F = -15. When we divide by 7 we have to find the greatest multiple of 7 less than -15, so the remainder will be positive (or zero). -21 is the greatest multiple of 7 less than -15, so the remainder is 6 since -21 + 6 = -15.

Alternatively, we can say that -7 goes into -15 twice, making -14 and leaving a remainder of -1.If we add 7 since the remainder is negative i.e. -1 + 7 we again get 6 as remainder. After getting the remainder we can find the day of the week for the given date. Following are the values for the corresponding remainders:


Examples for day calculation using Zeller’s Rule:
Let us calculate the day for the following dates: 1st April 1983 and 27th February 2023.
A) 1st April 1983:
Here
k = 1
m=2
D=83
C=19.

Putting the values in the formula, we get,
F= 1+ [(13*2-1)/5] +83+83/4+19/4-2*19
= 1+ [(26-1)/5]+83+20.75+4.75-38
= 1+25+83+20+4-38         (discarding the decimal values)
= 133-38
= 75

After calculating F divide it by 7 and get the remainder.
78/7=11 Quotient
5-Remainder 
Therefore, the day on 1st April 1983 was Friday since the remainder is 5.

B) 2nd March 2004:
Here,
k = 2
m= 1
D= 04
C= 20.
Putting the values in the formula, we get,

F= 2+ [(13*1-1)/5] +04+04/4+20/4-2*20
= 2+ [(13-1)/5] +04+01+05-40
= 2+ [12/5] +10-40
= 2+2+10-40         (discarding the decimal values)
= 14-40
= -26

Here F is negative. So when we divide by 7 we have to find the greatest multiple of 7 less than -26, so the remainder will be positive (or zero). -28 is the greatest multiple of 7 less than -26, so the remainder is 2 since -28 + 2 = -26.So, the remainder is 2.Therefore, the day on 2nd March 2004 was Tuesday since the remainder is 5.

C) 27th February 2023:
Here,
k = 27
m = 12
D = 22     (Since month count starts from March)
C = 20

Putting the values in the formula, we get,
F= 27+ [(13*12-1)/5] +22+22/4+20/4-2*20
= 27+ [(159-1)/5] +22+5.5+5-40
= 27+ [158/5] +22+5.5+5-40
= 27+ [31.6] + 22 + 5.5 + 5 – 40
= 27+ 31+22+5+5-40         (discarding the decimal values)
= 90-40
= 50

After dividing F by 7, we get remainder as 50/7=1.Therefore, the day on 27th February 2023 is Monday since the remainder is 1.

Input Format: Input date in following format DD-MM-YYYY

Constraints:
1 <= DD <=31
1 <= MM <=12
1600 <= YYYY <= 2099

Output Format: Print Day Name

Sample Input: 10 07 1980
Sample Output 0: Thursday
*/

#include<iostream>
using namespace std;
int main() {
    short int k, m, yy;
    cin>>k>>m>>yy;
    if(m==1 || m==2){
        m+=10;
        yy-=1;
    }else{
        m-=2;
    }
    
    short int D = yy%100;
    short int C = yy/100;
    int F = k+((13*m-1)/5)+D+(D/4)+(C/4)-2*C;
    if(F<0){
        k = ((-F/7)+1)*7;
        F+=k;
    }else{
        F=F%7;   
    }
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout<<days[F];
    return 0;
}