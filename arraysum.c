// A program that takes 10 elements from the user and stores them
// in an array and then computes their sum. 
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the numbers");
    for(int i=0;i<10;i++){
        scanf("%d", arr[i]);

    }
    // we have to compute the logic which is sum of all
    // Now we have evey value in the array
    int sum =0; // so that we can store the final result
    for (i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("The total sum is %d", sum);

}