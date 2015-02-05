# Single Number

> Given an array of integers, every element appears twice except for one. Find that single one.
>
> __Note:__
>
> Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

### Solution 1

1. Use [std::sort](http://www.cplusplus.com/reference/algorithm/sort/) to sort the array.
2. 'for loop' to go through the sorted array with a '2 steps' for each loop.
3. Compare `A[i]` with `A[i+1]`. Equal to continue, or `A[i]` will be the single number to return.
4. Otherwise the last element in the array will be the single number.

### Solution 2

Bitwise `XOR` solution

`^` operator: The bit is 1 if either but not both operands contain 1; otherwise, the result is 0.