def productExceptSelf(nums):
    pre = list(accumulate(nums, mul)) #accumulate(nums, mul) creates a prefix product array
    suf = list(accumulate(nums[::-1], mul))[::-1] #passing the reverse of the list in accumulate gives the suffix product
    n = len(nums) 
    return [(pre[i - 1] if i else 1) * (suf[i + 1] if i + 1 < n else 1) for i in range(n)] 
   
