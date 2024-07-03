#include<stdio.h>
int main(){
//    To acce the structure, you must create a variable of it.

// Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the 
// structure variable:

// Create a struct variable with the name "s1":

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}

// To access members of a structure, use the dot syntax (.):

// Example
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
}
