char * interpret(char * command){
    int index=0;
    char* p=(char*)malloc((strlen(command)+1)*sizeof(char));
    for(int i=0;command[i] !='\0';i++){
        if(command[i]=='('&& command[i+1]==')'){
            p[index++]='o';i++;
        }else if(command[i]=='('){
            p[index++]='a';i++;
            p[index++]='l';i++;
            i++;
        }else{
            p[index++]=command[i];
        }
    }p[index]='\0';
    
    return p;
    }