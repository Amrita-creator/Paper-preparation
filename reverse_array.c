#include<stdio.h>

void reverse(int arr[],int n);
void printArray(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    reverse(arr,6);
    printArray(arr,6);
    return 0;   
}

void reverse(int arr[],int n){   //// reverse the array 
    for(int i=0;i<n/2;i++){   
        int FirstVal= arr[i];
        int secondValue= arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = FirstVal;
    }
}

void printArray(int arr[],int n){     /// printing the value of the array 
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }   
     printf("\n");
}