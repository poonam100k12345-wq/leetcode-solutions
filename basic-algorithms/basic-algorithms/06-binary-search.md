# Binary Search

## Problem
Given a sorted array of integers, find the index of a target element using binary search. Return -1 if the target is not present.

## Link
https://leetcode.com/problems/binary-search/

## Approach
I used binary search by maintaining left and right pointers. I calculated the middle index and compared the middle element with the target. Based on the comparison, I searched either the left or right half of the array.

## Complexity
- Time: O(log n)
- Space: O(1)

## Notes
Binary search works efficiently on sorted arrays because it eliminates half of the remaining elements after each comparison.