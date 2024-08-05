#include <iostream>
using namespace std;

class Number
{
    int x,y;

public:
    Number(int n, int m)
    {
        x = n;
        y = m;
    }

    // Operator Overloading of : +,  -, *,  /,  %,  ==
    Number operator+(Number obj)
    {
        Number num3(this->x + obj.x, this->y + obj.y);
        return num3;
    }


    Number operator-(Number obj)
    {
        Number num3(this->x - obj.x, this->y - obj.y);
        return num3;
    }

    int operator*(Number obj)
    {
        return x * obj.x;
    }

    double operator/(Number obj)
    {
        return x % obj.x;
    }

    int operator%(Number obj)
    {
        return x / obj.x;
    }

    bool operator==(Number obj)
    {
        return x == obj.x;
    }

    int operator++(){
        return ++x;
    }
    
    int operator++(int val){
        return x++;
    }
    
    int operator--(int val){
        return --x;
    }
    
    int operator--(){
        return x--;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Number num1(2, 4);
    Number num2(2,5);
    // cout <<"Num1 - Num2 : "<< num1 - num2 << endl
    //      <<"Num1 * Num2 : "<< num1 * num2 << endl
    //      <<"Num1 / Num2 : "<< num1 / num2 << endl
    //      <<"Num1 % Num2 : "<< num1 % num2 << endl
    //      <<"Num1 == Num2 : "<< (num1 == num2) << endl
    //      <<"++Num1 : "<<++num1<<endl
    //      <<"Num1++ : "<<num1++<<endl
    //      <<"--Num1 : "<<--num1<<endl
    //      <<"Num1-- : "<<num1--<<endl;
    Number num3 = num1 + num2;
    num3.print();

    return 0;
}