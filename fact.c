// Take an input integer from the user and compute it's factorial
#include<stdio.h>
// Function declaration
int fact( int num);
// function definition
int fact(int num){
    // logic
    int count=1;
    while(num>0){
        count = num*count; // we're updating count here. 3x1=3, 3x2=6, 6x1=6 is the answer 
        num--;
    }
    return count;
}
// calling
int main(){
    int num; 
    printf("please enter the value "); // Obv, We'll ask user for the value
    // we will scan the value
    scanf("%d",&num);
    int M =fact(num); 
    printf("Factorial of given number is: %d \n ", M);
    return 0;


    
}
// Do not use format specifier in printf unless you're using variable. 
// You Need to save your file first bro, Then Try to execute. Serously..