"""
Problem: Reverse Linked List
Link: https://leetcode.com/problems/reverse-linked-list/
Difficulty: Easy

Description:
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Constraints:
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
"""

from typing import Optional, List


# Definition for singly-linked list
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def reverse_list(self, head: Optional[ListNode]) -> Optional[ListNode]:
        """
        Reverse a singly linked list.
        
        Args:
            head: Head of the linked list
            
        Returns:
            Head of the reversed linked list
        """
        prev = None
        current = head
        
        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        
        return prev


def create_list(values: List[int]) -> Optional[ListNode]:
    """Helper function to create a linked list from array"""
    if not values:
        return None
    
    head = ListNode(values[0])
    current = head
    
    for val in values[1:]:
        current.next = ListNode(val)
        current = current.next
    
    return head


def print_list(head: Optional[ListNode]) -> None:
    """Helper function to print linked list"""
    values = []
    while head:
        values.append(str(head.val))
        head = head.next
    print(f"[{','.join(values)}]")


def main():
    """Test function"""
    solution = Solution()
    
    # Test case 1
    values1 = [1, 2, 3, 4, 5]
    head1 = create_list(values1)
    print("Original: ", end="")
    print_list(head1)
    
    reversed1 = solution.reverse_list(head1)
    print("Reversed: ", end="")
    print_list(reversed1)


if __name__ == "__main__":
    main()