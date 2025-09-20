"""
Problem: Maximum Depth of Binary Tree
Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
Difficulty: Easy

Description:
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path 
from the root node down to the farthest leaf node.

Example:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Constraints:
The number of nodes in the tree is in the range [0, 10^4].
-100 <= Node.val <= 100
"""

from typing import Optional


# Definition for a binary tree node
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def max_depth(self, root: Optional[TreeNode]) -> int:
        """
        Find the maximum depth of a binary tree.
        
        Args:
            root: Root of the binary tree
            
        Returns:
            Maximum depth of the tree
        """
        if not root:
            return 0
        
        left_depth = self.max_depth(root.left)
        right_depth = self.max_depth(root.right)
        
        return 1 + max(left_depth, right_depth)


def main():
    """Test function"""
    solution = Solution()
    
    # Test case 1: [3,9,20,null,null,15,7]
    root1 = TreeNode(3)
    root1.left = TreeNode(9)
    root1.right = TreeNode(20)
    root1.right.left = TreeNode(15)
    root1.right.right = TreeNode(7)
    
    depth1 = solution.max_depth(root1)
    print(f"Test 1 - Max depth: {depth1}")
    
    # Test case 2: [1,null,2]
    root2 = TreeNode(1)
    root2.right = TreeNode(2)
    
    depth2 = solution.max_depth(root2)
    print(f"Test 2 - Max depth: {depth2}")


if __name__ == "__main__":
    main()