#include <stdio.h>
#include <stdlib.h>

void scanArray(int arr[], int n){
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[],int n){
    printf("\nArray : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

void reverseArray(int arr[],int n){
    int start=0, end=n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int n=0;

    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int* ptr = (int*)malloc(sizeof(int) * n);
    
    scanArray(ptr,n);       //To scan elements of array.

    printArray(ptr,n);      //To print elements of array.

    reverseArray(ptr, n);   //To reverse elements of array.

    printf("\n After reverseArray : ");

    printArray(ptr,n);

}