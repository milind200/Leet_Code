class Solution {
    public int balancedStringSplit(String s) {
        int count=0,lcount=0,rcount=0,i=0;
        while(i<s.length()){
            if(s.charAt(i)=='L'){
                lcount++;
            }else{
                rcount++;
            }
            if(lcount==rcount){
                count++;
                lcount=0;
                rcount=0;
            }
            i++;
        }
        return count;
    }
}