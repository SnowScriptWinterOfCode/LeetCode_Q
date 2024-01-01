## Intuition 
- We are given two sorted arrays `nums1` and `nums2` of sizes `m` and `n`, respectively.
- We need to merge these two arrays into a single sorted array, and the result should be stored inside `nums1`. 
- Since `nums1` is of size `m+n`, we can use this extra space to store the merged array.
- We can iterate through the arrays from the end and place the larger element at the end of `nums1`.

## Approach 1: Using STL
1. Traverse through `nums2` and append its elements to the end of nums1 starting from index `m`.
2. Sort the entire `nums1` array using `sort()` function.
## Complexity
`Time complexity`: O((m+n)log(m+n))
due to the sort() function

`Space complexity`: O(1)
We are not using any extra space, so the space complexity is O(1).

## Code
```
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
```

## Approach 2: Two Pointer
1. We can start with two pointers `i` and `j`, initialized to `m-1` and `n-1`, respectively.
We will also have another pointer `k` initialized to `m+n-1`,
which will be used to keep track of the position in `nums1` where we will be placing the larger element. 
2. Then we can start iterating from the end of the arrays `i` and `j`, and compare the elements at these positions. 
We will place the larger element in `nums1` at position `k`, and decrement the corresponding pointer `i` or `j` accordingly. 
3. We will continue doing this until we have iterated through all the elements in `nums2`. 
If there are still elements left in `nums1`, we don't need to do anything because they are already in their correct place.

## Complexity
`Time complexity`: O(m+n)
We are iterating through both arrays once, so the time complexity is O(m+n).

`Space complexity`: O(1)
We are not using any extra space, so the space complexity is O(1).

## Code
```
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
```
