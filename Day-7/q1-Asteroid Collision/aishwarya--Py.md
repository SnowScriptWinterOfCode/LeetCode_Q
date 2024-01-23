```
class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        st = []

        for val in asteroids:
            if not st or val > 0:
                st.append(val)
            else:
                while True:
                    peek = st[-1]
                    if peek < 0:
                        st.append(val)
                        break
                    elif peek == -val:
                        st.pop()
                        break
                    elif peek > -val:
                        break
                    else:
                        st.pop()
                        if not st:
                            st.append(val)
                            break

        return st
```