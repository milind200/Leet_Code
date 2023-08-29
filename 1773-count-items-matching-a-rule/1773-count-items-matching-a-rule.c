int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue){
    int count=0,i=0;
    if(strcmp(ruleKey,"type")==0){
        i=0;
    }
    if(strcmp(ruleKey,"color")==0){
        i=1;
    }
    if(strcmp(ruleKey,"name")==0){
        i=2;
    }
    printf("%d",i);
      for(int j=0;j<itemsSize;j++){
          if (strcmp(ruleValue,items[j][i])==0 ){
                count++;
            }
       
    }
    return count;
}