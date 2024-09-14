#include <stdio.h>
#include <string.h> // For all string function to manupulate
struct address
{                // A strucutre of name address
    int PINCODE; // We defined some Data-types
    char city[20];
};
struct Student
{ // Another structure called studnts
    char name[20];
    float GPA;
    struct address add; // since address can have multiple attrivutes, so we make address an nested structure
    // And added a member called "add" Now this add member had attributes like PINCODE and City.
} st;

int main()
{
    // Take input directly form the user
    strcpy(st.name, "Aryan");
    st.GPA = 9.1;
    strcpy(st.add.city, "Buxar");
    st.add.PINCODE = 9021021;

    // Now Print it our
    printf("\n %s %f %s %d \n", st.name, st.GPA, st.add.city, st.add.PINCODE);
    return 0;
}