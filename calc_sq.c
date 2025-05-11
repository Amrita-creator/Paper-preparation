#include<stdio.h>
int calcSquare(int n);

int main(){
    int n;
   printf("enter number :");
   scanf("%d",&n);
   printf("the square is : %d",calcSquare(n));
   return 0;
}

int calcSquare(int n){
    int sq=n*n;
    return sq;
}