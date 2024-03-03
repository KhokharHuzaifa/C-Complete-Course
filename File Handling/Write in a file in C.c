#include<stdio.h>
int main(){
    // The w mode means that the file is opened for writing. To insert content to it, you can use the fprintf() function 
    // and add the pointer variable (fptr in our example) and some text
    
    // Example
FILE *fptr;

// Open a file in writing mode
fptr = fopen("filename.txt", "w");

// Write some text to the file
fprintf(fptr, "Some text");

// Close the file
fclose(fptr);

// If you write to a file that already exists, the old content is deleted, and the new content is inserted. 
// This is important to know, as you might accidentally erase existing content.

fprintf(fptr, "Hello World!");
// As a result, when we open the file on our computer, it says "Hello World!" instead of "Some text":
}