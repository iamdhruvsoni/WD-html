#include<stdio.h>

main() 
{
    int a[2][2], b[2][2], i, j, k, mul[2][2]; // Declaring variables and matrices

    // Input for Matrix-1
    printf("\n\n\t Matrix-1 ......");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("\n\n\t Matrix Elements : ");
            scanf("%d", &a[i][j]); // Taking input for Matrix-1
        }
    }

    // Input for Matrix-2
    printf("\n\n\t Matrix-2 ......");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("\n\n\t Matrix Elements : ");
            scanf("%d", &b[i][j]); // Taking input for Matrix-2
        }
    }

    // Display Matrix-1
    printf("\n\n\t Matrix-1 ......\n\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d", a[i][j]); // Displaying Matrix-1
        }
        printf("\n\n");
    }

    // Display Matrix-2
    printf("\n\n\t Matrix-2 ......\n\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d", b[i][j]); // Displaying Matrix-2
        }
        printf("\n\n");
    }

    // Multiplication of Matrices
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            mul[i][j]=0; // Initializing elements of the resultant matrix to 0
            for(k=0; k<2; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j]; // Multiplying and summing up the elements
            }
        }
    }

    // Displaying the Resultant Matrix
    printf("\n\n\t A*B ......\n\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d", mul[i][j]); // Displaying the resultant matrix
        }
        printf("\n\n");
    }

    return 0; // Returning 0 to indicate successful execution
}

