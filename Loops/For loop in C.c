#include<stdio.h>
int main(){
    // When you kn exactly how many times you want to loop through a block of code, use the for loop 
    // instead of a while loop
    // Syntax
    for (expression 1; expression 2; expression 3) {
    // code block to be executed
    }
    // Expression 1 is executed (one time) before the execution of the code block.
    // Expression 2 defines the condition for executing the code block.
    // Expression 3 is executed (every time) after the code block has been executed.

    // Example
    int i;
    for (i = 0; i < 5; i++) {
    printf("%d\n", i);
    }
    // Example explained
    // Expression 1 sets a variable before the loop starts (int i = 0).
    // Expression 2 defines the condition for the loop to run (i must be less than 5). If the condition is true, 
    // the loop will start over again, if it is false, the loop will end.
    // Expression 3 increases a value (i++) each time the code block in the loop has been executed.
}
