class Solution {
public:
    int balancedStringSplit(string s) {
         int count=0,lcount=0,rcount=0,i=0;
    while(i<s.length()){
        if(s[i]=='L'){
            lcount++;
        }
        if(s[i]=='R'){
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
};