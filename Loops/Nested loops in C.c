#include<stdio.h>
int main(){
    // Loop in a loop is called nested loop
    // It is also possible to place a loop inside another loop. This is called a nested loop.
    // The "inner loop" will be executed one time for each iteration of the "outer loop"

    // Example
    int i, j;
    // Outer loop
    for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times
    // Inner loop
    for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
    }
}