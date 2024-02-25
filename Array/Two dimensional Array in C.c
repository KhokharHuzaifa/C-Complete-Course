#include<stdio.h>
int main(){
    // Two-Dimensional Arrays
    // A 2D array is also known as a matrix (a table of rows and columns).
    // To create a 2D array of integers, take a look at the following example:
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    // The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3]
    
    // To access an element of a two-dimensional array, you must specify the index number of both the row and column
    printf("%d", matrix[0][2]);  // Outputs 2

    // To change the value of an element, refer to the index number of the element in each of the dimensions
    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1

    // Loop Through a 2D Array
    // To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
    // Example
    int i, j;
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
        }
    }
}