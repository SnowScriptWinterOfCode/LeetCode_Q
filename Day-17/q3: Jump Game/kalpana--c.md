bool canJump(int* nums, int numsSize){
     int zero=0;
     int len=1;
   int mark=1;
     for(int i=numsSize-1;i>=0;i--){
        if(nums[i]==0){
        if(i==numsSize-1) mark=0;
        zero++;
       len++;
        }
        else if(zero>0){
          if(mark==0 &&nums[i]>=len-1){
                 zero=0;
                 len=1;
                 mark=1;
          }
          else  if(nums[i]>=len){
              zero=0;
              len=1;
            }
            else{
               len++;
            }
        }
      
     
     }
        if(numsSize==1) return true;
        else if(zero>0 ) return false;
         
         else return true;
}