// Take two matrices. and add them
#include <stdio.h>
#define row 10
#define col 10
int main(){
    // Read two matrices
    int M1 [row][col], M2[row][col],M3[row][col], i,j;
    int row1, col1, row2, col2;

    printf("Enter row value for M1\n");
    scanf("%d", row1);
    we can do pre
    printf("Enter col value for M1\n");
    scanf("%d", col1);

    prinf("Enter row value for M2\n");
    prinf("Enter col value for M2\n");
    scanf("%d", col2);
    scanf("%d", row2);
    // Check

    if (row1 != col1 || row2 != col2){
        prinf("Invalid Matrix\n");
        return;
    }

    // Take inputs for Matrix 1

    printf("Enter values for matrix 1\n");
    for (i=0;i<row1;i++){
        for (j=0;j<col1;j++){
            scanf("%d", &M1[i][j]);
        }
        printf("\n");

    }
// This Takes the input value for matrix 2
    printf("Enter values for matrix 2\n");
    for (i=0;i<row2;i++){
        for (j=0;j<col2;j++){
            scanf("%d", &M2[i][j]);
        }
        printf("\n");

    }   

// Here we write logic of the code 

    for (i=0;i<row1;i++){
        for (j=0;j<row1;j++){
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    // Now print the matrix
    for(i=0;i<row1;i++){
        for (j=0;j<row1;j++){
            printf("%d",&M3[i][j]);// printf the address (&) of M i j
        
        }
        printf("\n");
    }
}