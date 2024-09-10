// Take two number and print their sum
#include<stdio.h>
int main(){
    // Variable declaration
    int num1,num2, sum;
    // INput
    printf("Enter num1 and num2  :\n");
    scanf("%d %d",&num1,&num2);
    // logic
    sum=num1+num2;
    printf("Sum %d",sum);
    // colcude
    return 0;
}

/*
One interesting issue was that even after my prinf statement was correct 
but the outpad had a % sign, Which was because I missed the New-line character (\n)
Which made the compiler think that I am trying to print %. However, The format
specifier worked totally correct. 
This issue I found after commiting this to github. But before that this que made more 
things clear like .. 
*/
// This question made clear about format specifiers in c and how they're used
/*
I made some mistakes had erros but eventually learned that we don't 
Have to put too much spaces because it can have handeling issues. Also learnt
About how to use variables and all basic things 
*/