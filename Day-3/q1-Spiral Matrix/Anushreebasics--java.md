```
import java.util.*;

public class d3q1 {
    public static List<Integer> spiral(int[][] mat) {
        int n=mat.length;
        List<Integer> li=new ArrayList<>();
        int m=mat[0].length;
        int l=0;
        int r=m;
        int t=0;
        int b=n;
        while(t<b && l<r){
            // taking elements in top row:
            for(int i=l;i<r;i++){
                li.add(mat[t][i]);
            }
            t++;
            //taking elements in right col:
            for(int i=t;i<b;i++){
                li.add(mat[i][r-1]);
            }
            r--;
            if(!((l<r) && (t<b))){break;}
            //taking elements in bottom row
            for(int i=r-1;i>=l;i--){
                li.add(mat[b-1][i]);
            }
            b--;
            //taking elements in left col:
            for(int i=b-1;i>=t;i--){
                li.add(mat[i][l]);
            }
            l++;
        }
        return li;
    }
    public static void main(String[] args) {
        int[][] arr={{1,2,3},{4,5,6},{7,8,9}};
        List<Integer> ans=spiral(arr);
        for(int i:ans){
            System.out.print(i+",");
        }
        System.out.println();
        int[][] arr2={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        List<Integer> ans2=spiral(arr2);
        for(int i:ans2){
            System.out.print(i+",");
        }
    }
}
```
