#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
  //  map<int,int> ob;
  unordered_map<int,int> ob;
    // int arr[]={2, 3, 9, 2, 2};
    // for(auto i : arr)
    //     ob[i]++;
    // for(auto i : ob)
    //     cout<<i.first<<" "<<i.second<<"\n";
    ob[23]=12;
    ob[11]=89;
    ob[190]=56;
    ob[34]=90;
    for(auto i : ob)
        cout<<i.first<<" "<<i.second<<"\n";
    return 0;
}