#include<stdio.h>
int main(){
    // The void keyword, used in the previous examples, indicates that the function should not return a value. 
    // If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, 
    // and use the return keyword inside the function
    // Example
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}

// Outputs 8 (5 + 3)
}