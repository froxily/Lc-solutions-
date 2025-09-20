#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem: Reverse Linked List
 * Link: https://leetcode.com/problems/reverse-linked-list/
 * Difficulty: Easy
 * 
 * Description:
 * Given the head of a singly linked list, reverse the list, and return the reversed list.
 * 
 * Example:
 * Input: head = [1,2,3,4,5]
 * Output: [5,4,3,2,1]
 * 
 * Constraints:
 * The number of nodes in the list is the range [0, 5000].
 * -5000 <= Node.val <= 5000
 */

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current != nullptr) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev;
    }
};

// Helper function to create a linked list from array
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    cout << "[";
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << ",";
        head = head->next;
    }
    cout << "]" << endl;
}

// Helper function to delete linked list
void deleteList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Test function
int main() {
    Solution solution;
    
    // Test case 1
    vector<int> values1 = {1, 2, 3, 4, 5};
    ListNode* head1 = createList(values1);
    cout << "Original: ";
    printList(head1);
    
    ListNode* reversed1 = solution.reverseList(head1);
    cout << "Reversed: ";
    printList(reversed1);
    
    deleteList(reversed1);
    
    return 0;
}