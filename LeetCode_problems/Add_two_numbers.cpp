/*
Link: https://leetcode.com/problems/add-two-numbers/description/
2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 
Constraints:
The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros
*/
#include<iostream>
#include<algorithm>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *l3= new ListNode(0);
        ListNode *temp=l3;
        while(l1!=NULL && l2!=NULL){
            int num=l1->val + l2->val + carry;
            temp->next = new ListNode(num%10);
            carry=num/10;
            l1=l1->next;
            l2=l2->next;
            temp=temp->next;
        }
        while(l1!=NULL){
            int num=l1->val + carry;
            temp->next = new ListNode(num%10);
            carry=num/10;
            l1=l1->next;
            temp=temp->next;
        }
        while(l2!=NULL){
            int num= l2->val + carry;
            temp->next = new ListNode(num%10);
            carry=num/10;
            l2=l2->next;
            temp=temp->next;
        }
        if(carry==1){
            temp->next=new ListNode(carry);
        }
        l3=l3->next;
    return l3;
    }
};

int main(){
    return 0;
}