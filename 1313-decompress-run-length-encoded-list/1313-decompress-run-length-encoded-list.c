int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    int prev = 0; *returnSize = 0;
    
    for (int i = 0; i < numsSize; i += 2) *returnSize += nums[i];
    int* returnNums = (int*) malloc(sizeof(int) * (*returnSize));
    
    for (int i = 0; i < numsSize; i += 2) for (int j = 0; j < nums[i]; j++) returnNums[prev++] = nums[i + 1];
    return returnNums;
}