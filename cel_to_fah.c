#include<stdio.h>
float convertTemp(float celsius);

int main(){
    float fanh=convertTemp(37);
    printf(" fanh temp is : %f",fanh);
    return 0;
}
float convertTemp(float celsius){
    float fanh =   celsius* (9.0/5.0) +32;
    return fanh;
}