# Using hashmaps to solve the problem

## Time complexity= O(N) and Space complexity= O(N)
 
```
public int firstNonRepeating(int arr[], int n) 
    { 
        Map<Integer, Integer> freq = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (freq.containsKey(arr[i])) {
                freq.put(arr[i], freq.get(arr[i]) + 1);
            }
            else {
                freq.put(arr[i], 1);
            }
        }
        for (int i = 0; i < n; i++){
            if (freq.get(arr[i]) == 1){
                return arr[i];
            }
        }
        return -1;
    }  
```