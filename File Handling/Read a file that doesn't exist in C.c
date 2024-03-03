#include<stdio.h>
int main(){
    // If you try to open a file for reading that does not exist, the fopen() function will return NULL.

// As a good practice, we can use an if statement to test for NULL, and print some text instead (when the file does not exist)

// Example
FILE *fptr;

// Open a file in read mode
fptr = fopen("anyFileThatDoesntExist.txt", "r");

// Print some text if the file does not exist
if(fptr == NULL) {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);

// output:  Not able to open the file.

// If the file exist, read the content and print it. If the file does not exist, print a message using condition

// Example If the file exist, read the content and print it. If the file does not exist, print a message:

FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);
Hello World!
Hi everybody!
}