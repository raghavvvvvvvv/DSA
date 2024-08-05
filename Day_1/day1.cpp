/*
Create a class student having following data members:
1. studnet id
2. name
3. total marks
and implement function getGrade(), getAverage(), and getStudentDetails()

WAP to read and display the details of one student.
*/

#include<iostream>
using namespace std;

class student
{
public:
    int student_id;
    string name;
    float total_marks;
    
public:
    void getStudenDetails(){
        cout<<"\nStudent Id : "<<student_id;
        cout<<"\nStudent name : "<<name;
        cout<<"\nTotal Marks : "<<total_marks;
        cout<<"\nAverage : "<<getAverage();
        cout<<"\nGrade : "<<getGrade();        
    }


    float getGrade(){
        return total_marks/5;
    }

    char getAverage(){
        float percentage = total_marks/5;
        if (percentage>=90)
        {
            return 'A';
        }else if (percentage>=80)
        {
            return 'B';
        }else if (percentage>=70)
        {
            return 'C';
        }else if (percentage>=60)
        {
            return 'D';
        }else if (percentage>=50)
        {
            return 'E';
        }else 
        {
            return 'F';
        }        
    }

};

int main(){
    student s = student();
    cout<<"Enter Student Id : ";
        cin>>s.student_id;
        cout<<"\nEnter Student name : ";
        cin>>s.name;
        cout<<"Enter Total Marks : ";
        cin>>s.total_marks;
        s.getStudenDetails();
        return 0;
}