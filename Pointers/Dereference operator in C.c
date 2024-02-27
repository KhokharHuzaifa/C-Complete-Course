#include<stdio.h>
int main(){
// You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator)
// Example

int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);
}