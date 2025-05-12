#include<stdio.h>
void swap_no(int a,int b);
void _swap_no(int *a,int *b);


int main(){
    int a = 2 , b = 3;

    swap_no(a,b);                           /// call by value 
    printf(" a : %d  & b : %d \n",a,b);

     printf("\n");   

    _swap_no(&a,&b);
     printf(" a : %d  & b : %d \n",a,b);    //// call by reference 
    return 0;
}

void swap_no(int a,int b){   /// call by value 
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf(" a : %d  & b : %d \t ",a,b); 
}

void _swap_no(int *a,int *b){     /// call by reference 
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
    printf(" a : %d  & b : %d \t",*a,*b); 
}