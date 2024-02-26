#include<stdio.h>
#include <string.h>
// you must include the <string.h> header file in your program
int main(){
// To copy the value of one string to another, you can use the strcpy() functionchar str1[20] = "Hello ";
char str1[20] = "Hello World!";
char str2[20];
// Copy str1 to str2
strcpy(str2, str1);
// Print str2
printf("%s", str2);
// Note that the size of str2 should be large enough to store the copied string
}