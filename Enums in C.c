#include<stdio.h>
int main(){
    // An enum is a special type that represents a group of constants (unchangeable values).

// To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma

// syntax
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

// To access the enum, you must create a variable of it.

// Inside the main() method, specify the enum keyword, followed by the name of the enum (Level) and then 
// the name of the enum variable (myVar in this example)

enum Level myVar;
enum Level myVar = MEDIUM;

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  printf("%d", myVar);

  return 0;
}

// Changing values
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
printf("%d", myVar); // Now outputs 50

// Note that if you assign a value to one specific item, the next items will update their numbers accordingly:

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
}