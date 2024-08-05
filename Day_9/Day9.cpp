#include<iostream>
#include<vector>
using namespace std;

//1. WAP to store N elements in a vector an display them using for loop. for-each and using iterator.
void question1(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    cout<<"Elements using For loop: ";
     for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
    
    cout<<"Elements using For-each: ";
        for(auto i: vec){
            cout<<i<<" ";
     }
     cout<<"Elements using iterator: ";
    for(int i=0; i<n; i++){
     cout<<*(vec.begin()+i)<<" ";
     }
}

//2. WAP to display the emements of vector in reverse order using for loop.
void question2(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vecotr elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    
    cout<<"Elements in reverse order using For loop: ";
     for(int i=n-1; i>=0; i--){
        cout<<vec[i]<<" ";
    }
}

//3. WAP to display the elements of vector in revrse order using iterator.
void question3(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vecotr elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    
    cout<<"Elements in reverse order using iterator: ";
     for(auto i=vec.end()-1; i>=vec.begin(); i--){
        cout<<*i<<" ";
    }
}
//4. WAP to delete the value from the given position from the vector.
void question4(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vecotr elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    cout<<"Enter position to delete: ";
    int index;
    cin>>index;
    vec.erase(vec.begin()+index-1);
    cout<<"Elements after deletion ";
     for(auto i=vec.begin(); i<vec.end(); i++){
        cout<<*i<<" ";
    }
}
//5. WAP to remove all the duplicate elements from the vector.
//6. WAP to count the occurence of the given element in a vector.
void question6(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vector elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    cout<<"Enter element to count: ";
    int eleme,count=0;
    cin>>eleme;

     for(auto i=vec.begin(); i<vec.end(); i++){
        ((*i)==eleme ? count++: false);
    }
    cout<<"Element count : "<<count;
}
//7. WAP to count the frequency of each element of the vector.
void question7(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter vector elements: ";
    for(int i=0; i<n; i++){
     int t;
     cin>>t;
     vec.push_back(t);    
    }
    for(int i=0; i<n; i++){
        int fre=0;
        for(int j=0;j<n;j++){
            if(vec[i]==vec[j])
                fre++;
        }
    cout<<"Frequency of "<<vec[i]<<" is: "<<fre<<endl;
    }
}

int main(){
    // question1();
    // question2();
    // question3();
    // question4();
    question6();
    return 0;
}

