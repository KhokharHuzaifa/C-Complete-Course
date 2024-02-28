#include<stdio.h>
int main(){
    
// Declared functions are not executed immediately. They are "saved for later use", and will be executed 
// when they are called.
// To call a function, write the function's name followed by two parentheses () and a semicolon
// In the following example, myFunction() is used to print a text (the action), when it is called

// Example
// Inside main, call myFunction():

// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"
}