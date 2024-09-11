/*
Write the implementation of selection sort algorithm. 
*/
#include<stdio.h>
void Selection_sort(int arr[], int n){
    // We have to go to every index 
    for(int i=0;i<n;i++){
         // check for minumun among unsorted array

        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        // swap the elements
            int temp = arr[min]; // Here we're out of the looop. so cannot use j. we can use min. 
            // Above we're storing value of arr[min] into tempt
            arr[min]=arr[i];// here we're storing value of arr[i] into arr[min]
            arr[i] =temp; // here we're storing value of temp into arr[i] position
    }   
}
// main function consisting of arr, n and then pass the function.
int main (){
    int arr[]={3,5,7,8,2};
    int size=sizeof (arr) / sizeof(arr[0]);
    Selection_sort(arr, size); // Here we're passing arr and size as a parameter
    // printf("Sorted array is: %d", sort);
    return 0;
}