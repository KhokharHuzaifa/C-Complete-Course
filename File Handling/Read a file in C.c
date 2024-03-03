#include<stdio.h>
int main(){
    // In the previous topics, we wrote to a file using w and a modes inside the fopen() function.

// To read from a file, you can use the r mode

// Example
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");
// This will make the filename.txt opened for reading

// Next, we need to create a string that should be big enough to store the content of the file
// Store the content of the file
char myString[100];

// In order to read the content of filename.txt, we can use the fgets() function.
// The fgets() function takes three parameters
fgets(myString, 100, fptr);

// The first parameter specifies where to store the file content, which will be in the myString array we just created.
// The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
// The third parameter requires a file pointer that is used to read the file (fptr in our example).

// Now, we can print the string, which will output the content of the file
// Print the file content
printf("%s", myString);

// The fgets function only reads the first line of the file. If you remember, there were two lines of text in filename.txt.
// To read every line of the file, you can use a while loop that we cover in next topic
}