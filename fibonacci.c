#include<stdio.h>

int fib(int n);       // by recursion 
void fib_loop(int n); // by loop
int main(){ 
    int n = 8 ;
    printf("%d \n",fib(6));    //nth term of fibonacci
    
    for( int i=0;i<n;i++){
        printf("%d \t ",fib(i)); // print terms by recursion 
    }
    
    printf("\n");              //for next line 
   
    fib_loop(8);               // print terms by loop   
    return 0;
}

//to print nth term & all terms of fiboinacci sequence//
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN = fib(n-1) + fib(n-2);
    return fibN;
}

//to print terms of fibonacci sequence by loop ///
void fib_loop(int n){
int a=0,b=1,next;
for(int i = 0;i<n;i++){
    printf("  %d \t",a);
    next= a+b;
    a= b;
    b= next;
 }
}


 
