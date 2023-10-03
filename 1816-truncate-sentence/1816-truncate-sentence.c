char * truncateSentence(char * s, int k){
    int cnt=0,i=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]==' '){
            cnt++;
        }
        if(cnt==k){
            break;
        }
    }
    s[i]='\0';
    return s;
}