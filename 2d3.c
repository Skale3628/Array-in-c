//program to print 2D array if i == j (i = rows & j = columns) and sum of array 

#include<stdio.h>
void main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum = sum+arr[i][j];
            }
        }
    }
    printf("sum=%d\n",sum);
}