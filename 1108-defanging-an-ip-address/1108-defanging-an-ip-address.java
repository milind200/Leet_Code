class Solution {
    public String defangIPaddr(String address) {
    String arr=""; 
       for(char i:address.toCharArray()){
           if(i=='.'){
            arr+="[.]";       
           }else{
               arr+=i;
           }
       }
        return arr;
    }
}