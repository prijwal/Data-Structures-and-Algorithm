Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

Insert

Remove

Replace

 

Example 1:
```
Input: 
s = "geek", t = "gesek"
Output: 1
```
Explanation: One operation is required 
inserting 's' between two 'e's of str1.

Example 2:
```
Input : 
s = "gfg", t = "gfg"
Output: 
0
```
Explanation: Both strings are same.
 

Your Task:

You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation required to make both strings equal. 


Expected Time Complexity: O(|s|*|t|)

Expected Space Complexity: O(|s|*|t|)



Constraints:

1 ≤ Length of both strings ≤ 100

Both the strings are in lowercase.
