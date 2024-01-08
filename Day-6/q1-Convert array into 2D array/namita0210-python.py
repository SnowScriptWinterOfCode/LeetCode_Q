from collections import defaultdict

def create_minimal_2d_array(nums):
    num_count = defaultdict(int)
    for num in nums:
        num_count[num] += 1
    
    max_freq = max(num_count.values())
    result = [[] for _ in range(max_freq)]
    
    for num, freq in num_count.items():
        for i in range(freq):
            result[i].append(num)
    
    return result