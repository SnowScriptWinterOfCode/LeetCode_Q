```
class Solution:
    def minimumSteps(self, s: str) -> int:
        ans = 0                            # Variable to store the result
        black = []                         # List to store indices of '1's in the string

        n = len(s)                         # Length of the input string 's'

        # Iterate through the string 's' to find indices of '1's
        for i in range(n):
            if s[i] == '1':
                black.append(i)            # Store index if the character is '1'

        black.reverse()                    # Reverse the 'black' list

        # Calculate the minimum steps required
        for i in range(len(black)):
            # For each '1', calculate steps needed to move it to the end
            ans += (n - i - 1 - black[i])

        return ans  # Return the total minimum steps


```