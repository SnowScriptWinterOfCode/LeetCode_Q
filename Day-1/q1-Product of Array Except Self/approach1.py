def productExceptSelf(self, nums: List[int]) -> List[int]:
    product = 1
    for num in nums:
        if num != 0:
            product *= num
    if nums.count(0) > 1:
        return [0] * len(nums)
    elif nums.count(0) == 1:
        for i in range(len(nums)):
            nums[i] = 0 if nums[i] != 0 else product
        return nums
    return [product // i for i in  nums]
