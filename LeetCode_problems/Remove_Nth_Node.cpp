/*
Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
19. Remove Nth Node From End of List
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]

Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/
#include <iostream>
#include <algorithm>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *prev = head;
        ListNode *curr = head;
        int size = 0;
        while (prev != NULL)
        {
            size++;
            prev = prev->next;
        }
        prev = head;
        if (size == n)
        {
            head = head->next;
        }
        int count = size - n;
        while (count--)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr->next != NULL)
        {
            prev->next = curr->next;
        }
        else
        {
            prev->next = NULL;
        }

        return head;
    }
};

int main()
{
    return 0;
}