#include<stdio.h>
#include<string.h>
int vowel(char *s,int l);
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
     char *s=str;
     int len=strlen(str);
     int found=0;
     for(s=strtok(str," ");s!=NULL;s=strtok(NULL," ")){
         //printf("%s",s);
         int l=strlen(s);
         //printf("%d\n",l);
         if(vowel(s,l)){
             found=1;
             printf("%s",s);
             
         }
         
         
         //printf("%d",count);
         
         
     }
     if(!found){
         printf("not found");
     }
     /*for(int i=0;i<len;i++){
         if(str[i]=='\0'){
             str[i]=' ';
         }
     }*/
     
}

int  vowel(char *s,int l){
    int len=strlen(s);
    char *first,*last;
    first=s;
    last=first+len-1;
    int found=0;
    if((*first=='a' ||*first== 'e' ||*first== 'i' ||*first== 'o' ||*first== 'u') && 
    (*last=='a' || *last=='e' ||*last== 'i' ||*last== 'o' ||*last== 'u'))
    {
        //found=1;
        return 1;
      
    }
    else{
       return 0; 
    }
    
    
}


