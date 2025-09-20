#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Problem: Maximum Depth of Binary Tree
 * Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * Difficulty: Easy
 * 
 * Description:
 * Given the root of a binary tree, return its maximum depth.
 * A binary tree's maximum depth is the number of nodes along the longest path 
 * from the root node down to the farthest leaf node.
 * 
 * Example:
 * Input: root = [3,9,20,null,null,15,7]
 * Output: 3
 * 
 * Constraints:
 * The number of nodes in the tree is in the range [0, 10^4].
 * -100 <= Node.val <= 100
 */

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        return 1 + max(leftDepth, rightDepth);
    }
};

// Helper function to delete tree (post-order traversal)
void deleteTree(TreeNode* root) {
    if (root == nullptr) return;
    
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// Test function
int main() {
    Solution solution;
    
    // Test case 1: [3,9,20,null,null,15,7]
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);
    
    int depth1 = solution.maxDepth(root1);
    cout << "Test 1 - Max depth: " << depth1 << endl;
    
    deleteTree(root1);
    
    // Test case 2: [1,null,2]
    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(2);
    
    int depth2 = solution.maxDepth(root2);
    cout << "Test 2 - Max depth: " << depth2 << endl;
    
    deleteTree(root2);
    
    return 0;
}