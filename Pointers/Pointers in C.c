#include<stdio.h>
int main(){
    // Creating Pointers
// You learned from the previous topic, that we can get the memory address of a variable with the reference operator &

// Example

int myAge = 43; // an int variable

printf("%d", myAge);  // Outputs the value of myAge (43)
printf("%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
// A pointer is a variable that stores the memory address of another variable as its value.
}
