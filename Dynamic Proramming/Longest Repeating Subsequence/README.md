Given a string, find the length of the longest repeating subsequence such that the two subsequences don't have same string character at the same position, i.e., any i'th character in the two subsequences shouldn't have the same index in the original string.

 

Example 1:
```
Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".
```
Example 2:
```
Input: str = "aab"
output: 1
Explanation: The longest reapting subsequenece
is "a".
 ```

Your Task:

You don't need to read or print anything. Your task is to complete the function LongestRepeatingSubsequence() which takes str as input parameter and returns the length of the longest repeating subsequnece.
 

Expected Time Complexity: O(n2)

Expected Space Complexity: O(n2)

 

Constraints:

1 <= |str| <= 103
