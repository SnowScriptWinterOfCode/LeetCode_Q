## Approach:
<br /> 1. Initialize a Mapping: Create a dictionary that maps each digit from 2 to 9 to their corresponding letters on a telephone's buttons.
<br /> 2. Base Case: If the input string digits is empty, return an empty list.
<br /> 3. Iteratively make Combinations: Start with an empty combination in a list and iteratively build the combinations by processing each digit in the input string.
For each existing combination, append each corresponding letter for the current digit, building new combinations.
<br /> 4. Result: Return the generated combinations as the final result.
## Python code:
```
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []

        phone_map = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        combinations=[""]
        for i in digits:
            new_comb=[]
            for j  in combinations:
                for l in phone_map[i]:
                    new_comb.append(j+l)
            combinations=new_comb
        return combinations
        

```
