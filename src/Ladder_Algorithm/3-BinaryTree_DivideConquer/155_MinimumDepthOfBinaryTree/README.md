# Minimum Depth of Binary Tree

> Given a binary tree, find its minimum depth.
>
> The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

## Example

Given a binary trees as follows:

```
  1
 / \
2   3
   / \
  4   5
```
The minimum depth is `2`.

## Solution 1

Recursive:

* Use [std::min](http://www.cplusplus.com/reference/algorithm/min/) to compare left child depth with right child depth.
* NULL binary tree is the base case.

## Solution 2

Iterative:

* Use stack or vector to store TreeNode level by level.

## Notes