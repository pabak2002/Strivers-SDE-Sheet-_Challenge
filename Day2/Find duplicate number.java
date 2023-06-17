class Solution {
    public int findDuplicate(int[] nums) {
       Arrays.sort(nums);
        int c=1;
        int z=0;
        for(int i=0;i<nums.length-1;i++)
        {
            if(nums[i]==nums[i+1]){
                c+=1;
                if(c>1){
                z=nums[i];
                    }
            }
        }
        return(z); 
    }
}