char * restoreString(char * s, int* indices, int indicesSize){
char *ptr=(char*)malloc((indicesSize+1)*sizeof(char));
    for(int i=0;i<indicesSize;i++){
        ptr[indices[i]]=s[i];
    }
    ptr[indicesSize]='\0';
    return ptr;
}