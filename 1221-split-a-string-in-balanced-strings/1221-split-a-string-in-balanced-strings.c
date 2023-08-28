int balancedStringSplit(char * s){
    int count=0,lcount=0,rcount=0;
    while(*s!=NULL){
        if(*s=='L'){
            lcount++;
        }
        if(*s=='R'){
            rcount++;
        }
        if(lcount==rcount){
            count++;
            lcount=0;
            rcount=0;
        }
        s++;
    }
    return count;

}