/*
Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
1290. Convert Binary Number in a Linked List to Integer
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.

Example 1:
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10

Example 2:
Input: head = [0]
Output: 0
 
Constraints:
The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.
*/
#include<iostream>
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
    int getDecimalValue(ListNode* head) {   //Solution 1
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL){
            if(temp->val==0)
                n=n<<1;
            else
                n=(n<<1)+1;
            temp=temp->next;
        }
        return n;
    }

    int getDecimalValue2(ListNode* head) {       //Solution 2
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL){
           n = (n << 1) | temp->val;
            temp=temp->next;
        }
        return n;
    }
};

int main(){
    return 0;
}