#include<stdio.h>
int main(){
    // The fgets function only reads the first line of the file. If you remember, there were two lines of text in filename.txt.

// To read every line of the file, you can use a while loop

// Example
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

// Close the file
fclose(fptr);
}