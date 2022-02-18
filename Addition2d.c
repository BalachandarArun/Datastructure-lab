#include<stdio.h>
#include<stdlib.h>

void printArr(int *arr, int row, int column)
{
    for (int i = 0; i < row; i++)
   {
       for (int j = 0; j < column; j++)
       {
           printf("%d ", *(arr + i * column + j));
       }
       printf("\n");
   }
   printf("\n");
}

void add2d(int *arr, int *arr2, int row, int column)
{
    printf("Addition of two matrices\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", *(arr + i * column + j) + *(arr2 + i * column + j));
        }
        printf("\n");
    } 
    printf("\n");
}

void sub2d(int *arr, int *arr2, int row, int column)
{
    printf("Subtraction of two matrices\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", *(arr + i * column + j) - *(arr2 + i * column + j));
        }
        printf("\n");
    } 
    printf("\n");
}

void Multiple2d(int *arr, int *arr2, int row, int column)
{
    int *arr3 = (int *) malloc(row * column * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int result = 0;
            for (int k = 0; k < 3; k++)
            {
                result = result + *(arr + i * column + k) * *(arr2 + k * column + j);
            }
            printf("%d\t", result);
        }
        printf("\n");
    }
}

void lowerBound(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
                printf("%d\t", *(arr + i * 3 + j));
            else
                printf("%d\t", 0);
        }
        printf("\n");
    }
}

void upperBound(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
                printf("%d\t", *(arr + i * 3 + j));
            else
                printf("%d\t", 0);
        }
        printf("\n");
    }
}

void main()
{
    int *arr = (int *) malloc( 9 * sizeof(int));

    *(arr + 0) = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    
    *(arr + 3) = 40;
    *(arr + 4) = 50;
    *(arr + 5) = 60;

    *(arr + 6) = 70;
    *(arr + 7) = 80;
    *(arr + 8) = 90;

    int *arr2 = (int *) malloc( 9 * sizeof(int));

    *(arr2 + 0) = 10;
    *(arr2 + 1) = 20;
    *(arr2 + 2) = 30;
    
    *(arr2 + 3) = 40;
    *(arr2 + 4) = 50;
    *(arr2 + 5) = 60;

    *(arr2 + 6) = 70;
    *(arr2 + 7) = 80;
    *(arr2 + 8) = 90;

    /* *(arr2 + 0) = 34;
    *(arr2 + 1) = 12;
    *(arr2 + 2) = 35;
    
    *(arr2 + 3) = 4;
    *(arr2 + 4) = 6;
    *(arr2 + 5) = 8;

    *(arr2 + 6) = 2;
    *(arr2 + 7) = 81;
    *(arr2 + 8) = 9; */
   

    printArr(arr, 3, 3);
    printArr(arr2, 3, 3);
    add2d(arr, arr2, 3, 3);
    sub2d(arr, arr2, 3, 3);
    Multiple2d(arr, arr2, 3, 3);

    printf("\nsize : %d\n", sizeof(*arr2));

    printf("Lower triangular matrix\n");
    lowerBound(arr, 3);
    printf("\nUpper triangular matrix\n");
    upperBound(arr, 3);
}