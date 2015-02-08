# Search in Rotated Sorted Array

> Suppose a sorted array is rotated at some pivot unknown to you beforehand.
> 
> (i.e., `0 1 2 4 5 6 7` might become `4 5 6 7 0 1 2`).
>
> You are given a target value to search. If found in the array return its index, otherwise return -1.
>
> You may assume no duplicate exists in the array.

## Solution1

Go through the whole array to search target.

## Solution2

Binary search, need to determine which side get rotated first. This solution only works on ascending order.

## Notes

#### Binary Search

A __binary search__ or __half-interval search__ algorithm finds the position of a specified input value (the search "key") within an array sorted by key value.