# Valid Parentheses

## Problem
Given a string containing brackets, determine whether the brackets are valid and correctly matched.

## Link
https://leetcode.com/problems/valid-parentheses/

## Approach
I used a stack to store opening brackets. Whenever a closing bracket is found, I check whether it matches the most recent opening bracket.

## Complexity
- Time: O(n)
- Space: O(n)

## Notes
A stack is useful because brackets must be matched in the reverse order in which they are opened.