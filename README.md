# Marge-sorted-array

 Steps:

Loop through each element in nums2.

For every value, find the first zero in nums1 and place it there.

After inserting all nums2 values, apply Bubble Sort on nums1.

nums1 becomes one sorted array in non-decreasing order.




Approach:

In-place merge by replacing zeros with nums2 elements.

Full Bubble Sort is used to order the final array.
