/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/jack-and-jill-5-4
Problem Statement: Jack and Jill were going through a jungle to city. They encountered a monster who told they will only be allowed to escape when they solve a puzzle for him. They didn't have a choice so they agreed.
He states problem like : I have n buckets having 0 fruits in each bucket initially. I will give you n numbers denoting fruits required at nth position. But you need to keep 2 simple rules:
Either you can increment fruit count by 1 in each bucket i.e. Incremental Operation
Or you can double the fruits in each bucket i.e. Doubling operation.

Function Description::Provide implementation for method play_the_game(target, arraySize). play_the_game has the following parameter(s):
target: an integer list denoting numbers of fruits required at nth position.
arraySize: an integer denoting numbers element in a list.

Constraints:
1<=target[i]<=1000, where target[i] is the element at index Y.
1<=i<= 1000

Input Format
Read array size
Read array elelemts

Output Format: Print number of minimum operation requried to perform this task.

Sample Input 0:
2
2 3

Sample Output 0: 4

Sample Input 1"
3
16 16 16

Sample Output 1: 7
*/
#include<iostream>
using namespace std;

int  play_the_game(int array[], int arraySize){
    int n=arraySize,count=0;
    for(int i = 0; i<arraySize; i++){
        if(array[i]%2!=0){
            // cout<<"odd "<<array[i]<<","<<count+1<<endl;
            array[i]--;
            count++;
        }
    }
    for(int i=0; i<arraySize; i++){
        if(array[i]==0)
            n--;
        else{
            array[i]/=2;
            if(array[i]==0)
                n--;
            }
    }
    count++;
    // cout<<"division "<<count<<","<<n<<endl;
    if(n==0)
        return count;
    return (count + play_the_game(array, arraySize));
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<play_the_game(arr, n)-1;
    return 0;
}