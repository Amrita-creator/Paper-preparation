#include<stdio.h>

typedef struct BankAccount{
    int accountNo;
    char Name[100];
} acc;

int main (){
    acc acc1={123,"amrita"};
    acc acc2={321,"aditya"}; 
    acc acc3={124,"chhaavi"};

    printf("acc no : %d \n",acc1.accountNo);
    printf("acc no : %s \n",acc1.Name);
    return 0;
}