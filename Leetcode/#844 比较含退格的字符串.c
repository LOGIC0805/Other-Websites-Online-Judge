

bool backspaceCompare(char * S, char * T){
    int len_s=strlen(S);
    int len_t=strlen(T);
    
    char str_s[len_s+1];
    char str_t[len_t+1];
    
    int head_s=0;
    int head_t=0;
    
    int i;
    for(i=0;i<len_s;i++){
        if(S[i]=='#'){
            if(head_s){
                str_s[--head_s]=0;
            }
        }else{
            str_s[head_s++]=S[i];
        }
    }
    str_s[head_s]=0;
    for(i=0;i<len_t;i++){
        if(T[i]=='#'){
            if(head_t){
                str_t[--head_t]=0;
            }
        }else{
            str_t[head_t++]=T[i];
        }
    }
    str_t[head_t]=0;
    
    return (!strcmp(str_s,str_t));
}

