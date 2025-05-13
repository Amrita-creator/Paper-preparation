#include<stdio.h>
#include<string.h>

int  countLength(char arr[]);

int main(){
    char name[50];
    fgets(name,50,stdin);
    int length = strlen(name);
    printf("length is : %d \n",length);   // by library func
    printf("length is : %d",countLength(name));  // by normal func
    return 0;
}

int  countLength (char arr[]){
    int count = 0;
    for( int i=0;arr[i]!=0;i++){
        count ++;
    }
    return count-1 ;
}