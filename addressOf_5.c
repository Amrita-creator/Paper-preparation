#include<stdio.h>

 struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];

} ;

void printadd( struct address add);

int main(){
    struct address add[5];
    //input
    printf("enter the details for p1:");
    scanf("%d",&add[0].house_no);
    scanf("%d",&add[0].block);
    scanf("%s",&add[0].city);
    scanf("%s",&add[0].state);

    printf("enter the details for p2:");
    scanf("%d",&add[1].house_no);
    scanf("%d",&add[1].block);
    scanf("%s",&add[1].city);
    scanf("%s",&add[1].state);

    printf("enter the details for p3:");
    scanf("%d",&add[2].house_no);
    scanf("%d",&add[2].block);
    scanf("%s",&add[2].city);
    scanf("%s",&add[2].state);

    printf("enter the details for p4:");
    scanf("%d",&add[3].house_no);
    scanf("%d",&add[3].block);
    scanf("%s",&add[3].city);
    scanf("%s",&add[3].state);

    printf("enter the details for p5:");
    scanf("%d",&add[4].house_no);
    scanf("%d",&add[4].block);
    scanf("%s",&add[4].city);
    scanf("%s",&add[4].state);

    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);
    return 0;
} 

void printadd( struct address add){
    printf( "the address is : %d ,%d,%s ,%s \n",add.house_no,add.block,add.city,add.state);
}