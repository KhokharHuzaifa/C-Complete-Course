#include<stdio.h>
int main(){
    // Break
    // You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" 
    // of a switch statement.
    // The break statement can also be used to jump out of a loop.

    // Example
    int i;
    for (i = 0; i < 10; i++) {
    if (i == 4) {
    break;
    }
    printf("%d\n", i);
    }

    // Continue
    // The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with 
    // the next iteration in the loop.

    // Example
    int i;
    for (i = 0; i < 10; i++) {
    if (i == 4) {
    continue;
    }
    printf("%d\n", i);
    }

    // Break and Continue in While Loop
    // You can also use break and continue in while loops:

    // - Break Example
    int i = 0;
    while (i < 10) {
    if (i == 4) {
    break;
    }
    printf("%d\n", i);
    i++;
    }

    // Continue Example
    int i = 0;
    while (i < 10) {
    if (i == 4) {
    i++;
    continue;
    }
    printf("%d\n", i);
    i++;
    }
}
