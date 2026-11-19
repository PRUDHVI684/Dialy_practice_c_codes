#include<stdio.h>
int main(){

    FILE *fp=fopen("src1.txt","w");
    if(fp==NULL){
        printf("file not found\n");
    }
    else{
        printf("file opened successfully\n");  
    }
}