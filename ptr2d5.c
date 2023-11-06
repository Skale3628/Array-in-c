//Array of Pointer

#include<stdio.h>
void main(){
    int x=10;
    //int y=20
    char ch='A';
    int z=30;

    //int* arr[3]={&x,&y,&z};
    //void* arr[3]={&x,&ch,&z};       //to print address of diffrent data tyape in an array 
    printf("%ld\n",sizeof(arr[0]));

    printf("%d\n",*((int*)(arr[0])));
    printf("%p\n",arr[1]);
    printf("%lf\n",arr[2]);
}
