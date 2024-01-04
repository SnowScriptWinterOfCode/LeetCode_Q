Your friend is typing his name into a keyboard. Sometimes, when typing a character `c`, the key might get _long pressed_, and the character will be typed 1 or more times.

You examine the `typed` characters of the keyboard. Return `True` if it is possible that it was your friend's name, with some characters (possibly none) being long pressed.

**_Example 1:_**

**Input:** `name` = "alex", `typed` = "aaleex"
**Output:** `true`
**Explanation:** 'a' and 'e' in 'alex' were long pressed.

**_Example 2:_**

**Input:** `name` = "saeed", `typed` = "ssaaedd"
**Output:** `false`
**Explanation:** 'e' must have been pressed twice, but it was not in the `typed` output.

**Note** - `name` and `typed` consist of only lowercase English letters.
