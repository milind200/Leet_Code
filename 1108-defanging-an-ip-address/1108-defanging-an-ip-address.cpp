class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(char i:address){
            if(i=='.'){
                str+="[.]";
            }else{
                str+=i;
            }
        }
        return str;
    }
};