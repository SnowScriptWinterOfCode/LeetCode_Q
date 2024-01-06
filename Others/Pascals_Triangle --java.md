import java.util.*;

class Pascals_Triangle  {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res=new ArrayList<>();
        for(int i=1;i<=numRows;i++){
            List<Integer> temp=new ArrayList<>();
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    temp.add(1);
                }
                else{
                    int a=res.get(i-2).get(j-1)+res.get(i-2).get(j);
                    temp.add(a);
                }
            }
            res.add(temp);
        }
        return res;
    }
}
