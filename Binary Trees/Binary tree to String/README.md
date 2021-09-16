Given the root of a binary tree, construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way, and return it.

Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.

 

Example 1:

![image](https://user-images.githubusercontent.com/63565510/133598130-27785dc3-2e5d-42d4-baed-be46b0eb8405.png)

Input: root = [1,2,3,4]


Output: "1(2(4))(3)"


Explanation: Originallay it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
Example 2:

![image](https://user-images.githubusercontent.com/63565510/133598089-b062f3d6-1cd4-4524-b86e-b3463d1bc24c.png)

Input: root = [1,2,3,null,4]


Output: "1(2()(4))(3)"


Explanation: Almost the same as the first example, except we cannot omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
 

Constraints:

The number of nodes in the tree is in the range [1, 104].

-1000 <= Node.val <= 1000
