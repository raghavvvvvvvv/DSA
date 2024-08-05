#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//1. WAP to copy the data from one vector to another vector.
void question1(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter elements: ";
    for (int i=0;i<n; i++){
        int t;
        cin>>t;
        vec.push_back(t);
    }
    vector<int> vec2(vec);   
    cout<<"Element in vector 1: ";
    for (auto i : vec)
    {
        cout<<i<<" ";
    }
    cout<<"\nElement in vector 2: ";
    for (auto i : vec2)
    {
        cout<<i<<" ";
    }   
}

//2. WAP to remove all the duplicate elements from the vector
void question2(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter elements: ";
    int t;
    for (int i=0;i<n; i++){
        cin>>t;
        vec.push_back(t);
    }
    // By using O(n^2)
    for(auto i= vec.begin(); i<vec.end(); i++){
        for(auto j=i+1; j<vec.end(); j++){
            if(*i== *j){
                vec.erase(j);
                j--;
            }
        }
    }

    // By O(n)
    // auto end = vec.end();
    // int count=0;
    // for(auto i = vec.begin(); i<end; i++){
    //     auto new_end = remove(i+1,end, *i);
    //     if (new_end!=end)
    //     {
    //         count=count+((end-new_end));
    //         end=new_end;
    //     }
        
    // }
    // vec.resize(n-count);
    for(auto i: vec){
        cout<<i<<" ";
    }
}

//3. WAP to count the occurence of the given element in a vector
void question3(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter elements: ";
    int t;
    for (int i=0;i<n; i++){
        cin>>t;
        vec.push_back(t);
    }
    cout<<"Enter element to count: ";
    cin>>t; 
    cout<<"Count is: "<<count(vec.cbegin(), vec.cend(), t);
}

//4. WAP to count the frequency of each element of the vector.
void question4(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vector elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    // vector<int>::iterator i;  // Syntax for declaring an iterator variable.
    for(auto i=vec.begin(); i<vec.end(); i++){
       if(find(vec.begin(),i,*i)==i)
                cout<<"Frequency of "<<*i<<" is: "<<count(vec.begin(),vec.end(),*i)<<endl;
        }
}

//5. WAP to count the frequency of each character in string.
void question5(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    
    for(auto i=str.begin(); i<str.end(); i++){
       if(find(str.begin(),i,*i)==i)
                cout<<"Frequency of "<<*i<<" is: "<<count(str.begin(),str.end(),*i)<<endl;
        }
}

int main(){
    question5();
    return 0;
}