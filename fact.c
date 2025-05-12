#include<stdio.h>
int fact(int n);

int main (){
   printf(" the factorial of no is : %d",fact(5));
   return 0;
}

//// recursive function ////
int fact(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
         return 1;
    }
    int factNm1=fact(n-1);
    int factN= factNm1 * n;
    return factN;
}
