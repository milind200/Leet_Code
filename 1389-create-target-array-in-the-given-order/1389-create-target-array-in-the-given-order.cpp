class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
     
        vector<int> arr(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(arr[index[i]]<0){
                    arr[index[i]]=nums[i];
                }else{
                    for(int k=nums.size()-1;k>index[i];k--){
                       arr[k]=arr[k-1] ;
                    }
                arr[index[i]]=nums[i];
                }
            }
           return arr;
    }
};