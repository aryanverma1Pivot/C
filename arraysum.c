// A program that takes 10 elements from the user and stores them
// in an array and then computes their sum. 
#include<stdio.h>
int main(){
    int arr[10];
    //print("Enter the arrays");
    
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    // Took elements and putted it down into the array
    // Now we have to calculte the sum of all
    int sum=0;
    for (int i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("Sum of all values is: %d", sum);

}