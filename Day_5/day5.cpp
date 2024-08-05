// Classes and objects
#include<iostream>
using namespace std;

/* 1. WAP to create a class that don't allow object creation
    Ans: Make the constructor private
    */

/*2. WAP to create a class that allow only one object creation (Singleton class program)
Code: */
class A{
    A(){

    }
    public:
    int count=10;
    static A getObject(){ 
        static A obj;
        return obj;}
};


/* 3. WAP to count how many object of a class is created.*/
class B
{
public:
    static int countb;
    B(/* args */);
    ~B();
};

B::B(/* args */)
{
    countb++;
}

B::~B()
{ 
    countb--;
}
int B::countb=0;
int main(){
    A ob1 = A::getObject();
    A ob2 = A::getObject();
    A ob3 = A::getObject();
    cout<<ob1.count<<"\t"<<ob2.count<<"\t"<<ob3.count<<endl;
    cout<<&ob1<<"\t"<<&ob2<<"\t"<<&ob3<<endl;

    B b1,b2,b3;
    cout<<B::countb;
    return 0;
}


