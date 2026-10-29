char* addBinary(char* a, char* b) {
    
    int Alen = strlen(a);
    int Blen = strlen(b);

    int maxLength = Alen > Blen ? Alen : Blen;
    int size = maxLength+2;


    char* result = (char*)malloc(size*sizeof(char));


    int k = maxLength+1;

    result[k]='\0';
    k--;
    int i= Alen-1, j= Blen-1, carry=0;
   
   while (i>=0||j>=0||carry){
    int sum=carry;

    if(i>=0){
        sum+=a[i]-'0';
        i--;
    }
    if(j>=0){
        sum+=b[j]-'0';
        j--;
    }
    result[k]= (sum % 2)+'0';
    carry= sum/2;
    k--;

   }
return result;

}