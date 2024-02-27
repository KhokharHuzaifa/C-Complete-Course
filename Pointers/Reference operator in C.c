#include<stdio.h>
int main(){
// Example
int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

//Use the & operator to store the memory address of the myAge variable, and assign it to the pointer
//we used the pointer variable & to get the memory address of a variable
}