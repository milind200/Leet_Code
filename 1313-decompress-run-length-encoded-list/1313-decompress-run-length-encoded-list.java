class Solution {
    public int[] decompressRLElist(int[] nums) {
        List<Integer> arr=new LinkedList<>();
        for(int i=0;i<nums.length;i+=2){
            for(int j=0;j<nums[i];j++){
                arr.add(nums[i+1]);
            }
                
        }
        return arr.stream().mapToInt(Integer::intValue).toArray();
    }
}