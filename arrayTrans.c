#include<stdio.h>

int main(){
   int aadhar[3];

  ////// input                   //by pointer -> (ptr+i)
   int *ptr = &aadhar[0];        //by array   -> &array[i]
   for( int i=0;i<3;i++){
       printf("%d index :",i);
       scanf("%d",(ptr+i));
    }

 //// output ///
    for(int i=0;i<3;i++){
        printf("%d index = %d \n",i,*(ptr+1));
    }
    return 0;
}