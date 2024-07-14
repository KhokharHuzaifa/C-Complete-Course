#include<stdio.h>
#include <string.h>
// you must include the <string.h> header file in your pro
int main(){
// To compare two strings, you can use the strcmp() functionchar alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// It returns 0 if the two strings are equal
// It returns 1 if string 1 greater than string 2
// It returns -1 if string 1 less than string 2
Example
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns 1 (string 1 greater than string 2)

// Compare str3 and str2, and print the result
printf("%d\n", strcmp(str3, str2));  // Returns -1 (string 3 less than string 2)
}
