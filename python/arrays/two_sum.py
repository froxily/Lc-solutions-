"""
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/
Difficulty: Easy

Description:
Given an array of integers nums and an integer target, return indices of the two numbers 
such that they add up to target. You may assume that each input would have exactly one 
solution, and you may not use the same element twice.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Constraints:
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists.
"""

from typing import List


class Solution:
    def two_sum(self, nums: List[int], target: int) -> List[int]:
        """
        Find two numbers in the array that add up to the target.
        
        Args:
            nums: List of integers
            target: Target sum
            
        Returns:
            List containing indices of the two numbers that add up to target
        """
        num_map = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            
            if complement in num_map:
                return [num_map[complement], i]
            
            num_map[num] = i
        
        return []  # Should never reach here given the problem constraints


def main():
    """Test function"""
    solution = Solution()
    
    # Test case 1
    nums1 = [2, 7, 11, 15]
    target1 = 9
    result1 = solution.two_sum(nums1, target1)
    print(f"Test 1 Result: {result1}")
    
    # Test case 2
    nums2 = [3, 2, 4]
    target2 = 6
    result2 = solution.two_sum(nums2, target2)
    print(f"Test 2 Result: {result2}")


if __name__ == "__main__":
    main()