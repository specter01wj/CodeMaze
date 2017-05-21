# Binary Tree Level Order Traversal

> Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

> __Example__

> Given binary tree `{3,9,20,#,#,15,7}`,

```
    3
   / \
  9  20
    /  \
   15   7
```

> return its level order traversal as:

```
[
  [3],
  [9,20],
  [15,7]
]
```

## Solution

Just use `deque` to traverse each level of the tree


## Source

[LintCode](http://www.lintcode.com/en/problem/binary-tree-level-order-traversal/)