#include<stdio.h>
int main(){
    // To create a file, you can use the w mode inside the fopen() function
    // Example
FILE *fptr;
// Create a file
fptr = fopen("filename.txt", "w");
// Close the file
fclose(fptr);

// If you want to create the file in a specific folder, just provide an absolute path:
// fptr = fopen("C:\directoryname\filename.txt", "w");
}