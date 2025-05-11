#include<stdio.h>
void printHW(int count);
int main (){
    int n;
    printHW(5);
    return 0;
}

void printHW(int count){
    if(count == 0 ){
        return;
    }
    printf("hello world");
    printHW(count-1);

}