from collections import defaultdict

def first_non_repeating(arr):
    frequency = defaultdict(int)
    
    # Count frequency of each element
    for num in arr:
        frequency[num] += 1
    
    # Find the first element with frequency 1
    for num in arr:
        if frequency[num] == 1:
            return num
    
    return None  # Return None if no non-repeating element is found

