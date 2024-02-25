#include<stdio.h>
int main(){
    // To change the value of a specific character in a string, refer to the index number, and use single quotes
    // Example:
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s", greetings);
    // Outputs Jello World! instead of Hello World!
}