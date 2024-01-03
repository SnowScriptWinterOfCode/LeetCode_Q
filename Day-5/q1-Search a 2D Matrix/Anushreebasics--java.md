```
public class d5q1 {
    public static boolean func(int[][] arr, int key){
        int i=0;
        int j=arr[0].length-1;
        while(i<arr.length && j>=0){
            if(arr[i][j]==key){
                return true;
            }
            if(key>arr[i][j]){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        //int[][] arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        //System.out.println(func(arr,3));

        int[][] arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        System.out.println(func(arr,13));

    }
}

```
