We are given an array nums and need to return an array ans where ans[i] contains product of all elements in nums except nums[i].

## Approach 1: Bruteforce

We simply calculate the product of the whole array, ignoring the zeroes at first.
Here, we can consider 3 cases:

    Case 1: when there is exactly 1 zero in the array, we return an array of zeroes except for the element that was zero in the original array.
    Case 2: when there are more than 1 zeroes in the array, we return an array of zeroes.
    Case 3: when there are no zeroes in the array, we return the product of array except self using a simple traversal of the array.

## Approach 2: Maintaining a prefix and suffix

Prefix and suffix are arrays where $prefix[i]$ is the product of all elements before $arr[i]$ and 
$suffix[i]$ is the product of all elements after $arr[i]$. At each index $i$ we can calculate the $ans[i]$ by multiplying $prefix[i]$ and $suffix[i]$

## Approach 3: Space Optimised prefix and suffix

We dont really need to maintain an array to keep track of prefix and suffix products. We can use variables instead. This lowers the space
complexity from $O(n)$ to $O(1)$ 

We do 2 passes of the array, first from 0 to the end and then from the end to 0. We multiply the prefixes in the first pass and the suffixes in the second pass.
