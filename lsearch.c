// Write a program that takes elements from the user and a key element to
// search for it
#include<stdio.h>
int main (){
    // Make an empty array
    int arr[10];

    // Will take elements into that array
    printf("Enter integer elements:\n");
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr[i]);
    }

    // ask for a key element to find
    printf("Which element you want to search for: ");
    int key;
    scanf("%d\n",&key);
    // Logic:In loop we will go to every index of array and try to match
    for (int i=0;i<10;i++){
        if (key==arr[i]){
            printf("Element found at %d\n location",i);
        }
        else{
            printf("We Don't have that number sir!");
        }
        return 0;
    }

    // out of loop. Print Not found.
}

// Include Headers, Libraries 
// use format specifier only while using variables
// Check spellings mistakes.