# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all strings.

## Link
https://leetcode.com/problems/longest-common-prefix/

## Approach
I compared the strings one by one and kept only the characters that are common at the beginning of all strings.

## Complexity
- Time: O(n × m), where n is the number of strings and m is the length of the shortest string.
- Space: O(m) for storing the prefix.

## Notes
The solution returns an empty string when there is no common prefix.