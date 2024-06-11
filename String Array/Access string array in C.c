#include<stdio.h>
int main(){
    char greetings[] = "Hello World!";
    printf("%s", greetings);
    // Since str are actually arrays in C, you can access a string by referring to its index 
    // number inside square brackets []
    printf("%c", greetings[0]);
    // Note that we have to use the %c format specifier to print a single character.
}
