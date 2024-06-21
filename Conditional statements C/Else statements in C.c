#include<stdio.h>
int main(){
    // Use the else statement to specify a block of code to be executed if the condition is false.
    // Syntax :
    if (condition) {
    // bl of code to be executed if the condition is true
    } else {
    // block of code to be executed if the condition is false
    }
    // Example :
    int time = 20;
    if (time < 18) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    // Outputs "Good evening."
    // Example explained :
    // In the example above, time (20) is greater than 18, so the condition is false. Because of this, 
    // we move on to the else condition and print to the screen "Good evening". If the time was less than 18, 
    // the program would print "Good day".
}
