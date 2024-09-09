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
/*
I got to use float and knew the importance of New-line operator. 

One Interesting issue was Integer type variable declaration which conflicted 
with scanf trying to read floating type (%f) which caused error. 

Also, Got to know that printf statements cannot have Address-of operator (&)
Because printf function only reads the variable not address
*/