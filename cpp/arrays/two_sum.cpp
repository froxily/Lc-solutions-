#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Problem: Two Sum
 * Link: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * 
 * Description:
 * Given an array of integers nums and an integer target, return indices of the two numbers 
 * such that they add up to target. You may assume that each input would have exactly one 
 * solution, and you may not use the same element twice.
 * 
 * Example:
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 * 
 * Constraints:
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * Only one valid answer exists.
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            numMap[nums[i]] = i;
        }
        
        return {}; // Should never reach here given the problem constraints
    }
};

// Test function
int main() {
    Solution solution;
    
    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Test 1 Result: [" << result1[0] << ", " << result1[1] << "]" << endl;
    
    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Test 2 Result: [" << result2[0] << ", " << result2[1] << "]" << endl;
    
    return 0;
}