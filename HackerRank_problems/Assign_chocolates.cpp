/*
Link: https://www.hackerrank.com/contests/miet2024/challenges/assign-chocolates

Assume you are an awesome parent and want to give your children some chocolates. But, you should give each child at most one Chocolates. Each child i has a greed factor g[i], which is the minimum size of a chocolates that the child will be happy with; and each chocolates j has a size s[j]. If s[j] >= g[i], we can assign the chocolates j to the child i, and the child i will be happy. Your goal is to maximize the number of your happy children and output the maximum number.

Input: g = [1,2,3], s = [1,1]
Output: 1
Explanation: You have 3 children and 2 chocolates. The greed factors of 3 children are 1, 2, 3. And even though you have 2 chocolates, since their size is both 1, you could only make the child whose greed factor is 1. You need to output 1.

Input Format:
Read the size of an array(g) i.e N1
Read N1 elements(greedy factor) in an array i.e g
Read the size of an array(s) i.e N2
Read N2 elements(chocolates) in an array i.e s

Constraints:
1 <= g.length <= 3 * 104 0 <= s.length <= 3 * 104 1 <= g[i], s[j] <= 231 - 1

Output Format: Print number of your happy children

Sample Input 0:
3
1 2 3
2
1 1

Sample Output 0: 1
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n, m;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;
    vector<int> arr2(m);
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());
    
    int count =0, i=0, j=0;
    while(i<n && j<m){
        if(arr2[i]>=arr[j]){
            count++;
            j++;
        }
        i++;
    }
    cout<<count;
    return 0;
}