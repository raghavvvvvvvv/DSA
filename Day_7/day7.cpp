// // Templates in C++

// #include<iostream>
// #include<string>
// using namespace std;
// template <typename T1, typename T2> class Number{
//     T1 x;
//     T2 y;
//     public:
//     Number(T1 a,T2 b){
//         x=a;
//         y=b;
//     }
//     void sum(){
//         cout<<x+y<<endl;
//         }
// };
// int main(){
//     Number<int,int> ob(11,22);
//     ob.sum();
//     Number<float,int> num1(34.43,65.33);
//     num1.sum();
//     Number<string,string> num2("Aman","deep");
//     num2.sum();
//     // return 0;
// }

// write a program to preform the sum of two diffrent types of values.

// Templates in C++

// #include<iostream>
// #include<string>
// using namespace std;
// int sum(int a, int b){
//     return a+b;
// }
// float sum(float a, float b){
//     return a+b;
// }
// double sum(double a, double b){
//     return a+b;
// }
// float sum(float a, int b){
//     return a+b;
// }
// float sum(int a, float b){
//     return a+b;
// }
// double sum(double a, int b){
//     return a+b;
// }
// double sum(int a, double b){
//     return a+b;
// }
// double sum(double a, float b){
//     return a+b;
// }
// double sum(float a, double b){
//     return a+b;
// }
// int main(){
//     cout<<sum(10,20)<<endl;
//     cout<<sum(10.5,20)<<endl;
//     cout<<sum(10.55f,20.68)<<endl;
//     cout<<sum(1.6f,20)<<endl;


//     return 0;
// }

// Template Function

#include<iostream>
using namespace std;
template <typename T1, typename T2>
void sum(T1 x, T2 y){
    cout<<x+y<<endl;
}
int main(){
    sum<int,int>(10, 20);
    sum<float,int>(10.3,20);
    return 0;
}

// WAP to create an array class that contains three functions:
//     1. max()
//     2. min()
//     3. printArray()

// #include<iostream>
// using namespace std;
// template <typename T,int size>
// class Array{
//     T array[size];
//     public:
//         Array(T arr[]){
//             for(int i=0;i<size;i++){
//                 array[i]=arr[i];
//             }
//         }
    
//         T max(){
//             T mx=array[0]; 
//             for(T i: array){
//                 if(i > mx){
//                     mx=i;
//                 }
//             }
//             return mx;
//         }
//         T min(){
//             T mn=array[0];
//             for(T i: array){
//                 if(i < mn){
//                     mn=i;
//                 }
//             }
//             return mn;
//         }
//         void printArray(){
//             for(T i: array){
//                 cout<<i<<" ";
//             }
//         }
// };
// int main(){
//     int arr[]={10,20,30,40,50};
//     Array<int,5> ob(arr);
//     ob.printArray();
//     cout<<endl;
//     cout<<"The Minimum Value is "<<ob.min()<<endl;
//     cout<<"The MAximum Value is "<<ob.max()<<endl;
    
    
// }
