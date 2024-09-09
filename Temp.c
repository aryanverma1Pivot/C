// write a program to convert Temperature from Fahrenhiet to celsius scale
#include<stdio.h>
int main(){
    // Declare variable
    float temp,fahrenhiet;
    // take input
    printf("Enter temperature in fahrenhiet \n:");
    scanf("%f",&fahrenhiet);
    // logic 
    temp=(fahrenhiet-32)/1.8;
    printf("Temperature in celsius scale is %f\n",temp);
    // conclude
    return 0;
}