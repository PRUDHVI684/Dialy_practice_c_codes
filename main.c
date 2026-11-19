#include<stdio.h>
#define row 2
#define col 3
int i,j,k;
int input(int (*)[col]);//,int row,int col;
int print(int (*)[col]);//,int row,int col);
int sort(int (*)[col]);//,int row,int col);
int main(){
    
    int a[row][col];
    input(a);
    print(a);//,row,col);
    sort(a);//,row,col);
    print(a);
    
    
}

int input(int (*a)[col]){
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter");
            scanf("%d",&a[i][j]);
        }
    }
}

int print(int (*a)[col]){
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

int sort(int (*a)[col]){
    int t;
     for(i=0;i<row;i++){
         for(k=0;k<col-1;k++){
        for(j=0;j<col-1;j++){
            
            if(a[i][j]>a[i][j+1]){
                t=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=t;
            }
            //printf("rgeg ");
        }
    
        
     }
     }
     printf("\n");
}






























