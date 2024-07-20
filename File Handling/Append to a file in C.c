#include<stdio.h>
int main(){
    // If you wait to add con to a file without deleting the old content, you can use the a mode.

// The a mode appends content at the end of the file
// Example
FILE *fptr;

// Open a file in append mode
fptr = fopen("filename.txt", "a");

// Append some text to the file
fprintf(fptr, "\nHi everybody!");

// Close the file
fclose(fptr);

// Just like with the w mode; if the file does not exist, the a mode will create a new file with the "appended" content.
}
