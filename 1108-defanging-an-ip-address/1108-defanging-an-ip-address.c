char * defangIPaddr(char * address){
    char *d = calloc(1, sizeof("xxx[.]xxx[.]xxx[.]xxx")), *t = d;
    for (char *a = address ; *a ; a++)
        *a == '.' ? *d++ = '[', *d++ = '.', *d++ = ']' : (*d++ = *a);
    return t;
}