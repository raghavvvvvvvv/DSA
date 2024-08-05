/*
Link: https://leetcode.com/problems/palindrome-linked-list/description/
234. Palindrome Linked List
Given the head of a singly linked list, return true if it is a 
palindrome or false otherwise.

Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
 
Constraints:
The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    vector<int> da;
    while(head!=NULL){
        da.push_back(head->val);
        head=head->next;
    }
    for(auto i=da.begin(),j=da.end()-1; i<j;i++,j--){
        if((*i)!=(*j)){
            return false;
        }
    }
        return true;
    }
};

int main(){
    return 0;
}