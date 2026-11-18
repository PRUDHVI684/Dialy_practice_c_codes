#include<stdio.h>
#include<string.h>
#include<ctype.h>
void covert(char str[],char str1[]);
int main(){
    
    char str[50];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    while(*p){
        if(*p=='\n'){
            *p='\0';
            break;
        }
        p++;
    }
    
    char str1[10];
    fgets(str1,sizeof(str1),stdin);
    char *q=str1;
    while(*q){
        if(*q=='\n'){
            *q='\0';
            break;
        }
        q++;
    
}
covert(str,str1);

}

void covert(char str[],char str1[]){
    
    char *p=str;
    while((p=strstr(str,str1))!=NULL){
        int len=strlen(str1);
        char *st,*ed;
        //st=p;
        //ed=p+len;
        while(len>0){
            if(isupper(str[*p])){
                tolower(str[*p]);
            }
            else if(islower(str[*p])){
                toupper(str[*p]);
            }
            len--;
        }
        p++;
    }
    printf("%s",str);
}