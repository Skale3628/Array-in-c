#include<stdio.h>
void main(){
    
    int arr[2][2][3]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
    printf("Elements of 3D array are:\n");
    int sum=0;
    for(int i=0;i<2;++i){
        printf(" \n plane :  %d\n",i);
        for(int j=0;j<2;j++){
            if (sum==0);
            printf("\n  row :%d ",j);
            for(int k=0;k<3;k++){
                printf(" %d",arr[i][j][k]);

            }
            //printf("/n");
        }
}
}