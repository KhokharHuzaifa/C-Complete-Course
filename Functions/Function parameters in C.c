#include<stdio.h>
int main(){
//  Information can be passed to functions as a parameter. Parameters act as variables inside the function.
// Parameters are specified after the function name, inside the parentheses. You can add as many parameters 
// as you want, just separate them with a comma
// Syntax
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
// Example
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
// Hello Liam
// Hello Jenny
// Hello Anja

// When a parameter is passed to the function, it is called an argument. So, from the example above
// name is a parameter, while Liam, Jenny and Anja are arguments.
}
