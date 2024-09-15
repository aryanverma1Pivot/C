// Take an array, and acess it's elemnets using normal indexing
// and again using Pointers
#include <stdio.h>

int main()
{
    int *ptr, i, arr[3] = {2, 4, 6, 1}; // *ptr is just a varaible. that
    // can store the memory adress of another variable
    // to make a pointer point to a variable we use &

    // Before that let's first acess the elements using normal method

    for (i = 0; i < 3; i++)
    {
        printf("arr[%d] : address=%p data=%d\n", i, &arr[i], arr[i]);
        // Here we're acessing elemeents using Address-of-operator.
    }

    // Acessing the array using pointers

    // Now we will use the variable *ptr to point to a varaible
    *ptr = arr; // here the pointer is pointed to first element i.e arr[0]
    for (i = 0; i < 3; i++)
    {
        printf("ptr address = %p data = %d", ptr, *ptr);
        ptr++;
        // Above: We're printing ptr which is pointing to the
        // first element of arr. Now we've also done ptr++
        // This will print all the adress and at the end *ptr which
        // means the value will also be printed.
        return 0;
    }
}