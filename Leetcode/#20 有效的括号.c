

bool isValid(char * s){
    int len=strlen(s);
    int i,j=0;
    char tmp[len+1];
    int flag=1;
    for(i=0;i<len;++i){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            tmp[j++]=s[i];
        }else if(s[i]==')'){
            if(j>0&&tmp[j-1]=='('){
                --j;
            }else{
                flag=0;
                break;
            }
        }else if(s[i]==']'){
            if(j>0&&tmp[j-1]=='['){
                --j;
            }else{
                flag=0;
                break;
            }
        }else if(s[i]=='}'){
            if(j>0&&tmp[j-1]=='{'){
                --j;
            }else{
                flag=0;
                break;
            }
        }
    }
    if(flag==1&&j==0){
        return true;
    }else{
        return false;
    }
}

