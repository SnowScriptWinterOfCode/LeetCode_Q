```
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i=0, j=0;
    vector<int> nums;
    while(1)
    { //pushing elements of nums2 into the resultant array(nums).
        if(i==m)
        {
            while(j<n)
            {
                nums.push_back(nums2[j]);
                j++;
            }
            break;
        }
        else if(j==n)
        {          //pushing elements of num1 into the resultant array(nums).
            while(i<m)
            {
                nums.push_back(nums1[i]);
                i++;
            }
            break;
        }
        else       //comparing elements of nums 1 and nums 2. 
        {          // if nums1's element is smaller than it will be added.
            if(nums1[i] < nums2[j])
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else   //if nums2's element is smaller than nums 1 then nums 2 element will be added
            {
                nums.push_back(nums2[j]);
                j++;
            }
        }
    }
```