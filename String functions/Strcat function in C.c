#include<stdio.h>
#include <string.h>
// you must incle the <string.h> header file in your program
int main(){
// To concatenate (combine) two strings, you can use the strcat() functionchar alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char str1[20] = "Hello ";
char str2[] = "World!";
// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);
// Print str1
printf("%s", str1);
// Note that the size of str1 should be large enough to store the result of the two strings combined 
}
