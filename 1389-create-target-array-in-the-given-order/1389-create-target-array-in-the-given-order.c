int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int* arr = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for(int i = 0 ; i < numsSize ; i++){
        arr[i] = -1;
    }
    for(int i = 0 ; i < numsSize ; i++){
        if(arr[index[i]] < 0)
            arr[index[i]] = nums[i];
        else{
            for(int j = numsSize - 1; j > index[i] ; j--){
                arr[j] = arr[j-1]; 
            }
            arr[index[i]] = nums[i];
        }
    }
    return arr;
}