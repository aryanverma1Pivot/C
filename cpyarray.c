/* Write a program to copy array into a new array individually */
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int cpy[5];

    for (int i = 0; i < 5; i++)
    {
        int temp = arr[i]; // This take the indexes of arr and cpy. And then equls 0th value
        cpy[i] = temp;
        // of arr to cpy. Hence 0th element of cpy will be 1.

        printf("arr=%d\n", cpy[i]);
    }
    return 0;
}

// Do not forget to initilise every variable you use
// Keep in mind those syntaxes specilly-->  ;
// Do not forget format specifier