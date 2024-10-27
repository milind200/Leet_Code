class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] arrayOfSums = new int[2];
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int sum=nums[i]+nums[j];
                if(sum==target){
                    arrayOfSums[0]=i;
                    arrayOfSums[1]=j;
                    sum=0;
                }
            }
        }
        return arrayOfSums;
    }
}