/*Write a function that takes input a number n as input and then computes the sum of following series
1!/1 + 2!/2 + .. n!/n. The function then should return the computed sum. The main function which is 
calling the above function should print the sum of above series. 
*/ 
#include<stdio.h>
int fact(int n);

int fact(int n){
    int tempt=1; // for accumulatingf
    while(n>0){
        tempt=(tempt*n);
        n--;
    }
    return tempt;
}
int series (int m);

int series (int m){
    int num=1; // for iterating 
    int val=0; // for accumulating
    while(num<=m){
        val = val+(fact(num)/num);
        num++;
    }
    return val;
}
int main (){
    int n,value;
    printf("Enter the value of n :");
    scanf("%d",&n);
    if(n<0){
        printf("INVALID: Please input positive integer");
    }
    else{
    
        value = series(n);// Final Capturing
        printf("The sum of the series is: %d\n", value);
    }
        
    
}