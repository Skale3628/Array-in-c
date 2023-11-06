#include<stdio.h>
void main(){
    int rows ,cols;
    printf("enter rows and cols\n");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    printf("enter array elements\n");
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf(" array elements are\n");
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
      printf("\n");  
    }

}