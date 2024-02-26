#include<stdio.h>
#include <string.h>
// you must include the <string.h> header file in your program
int main(){
// to get the length of a string, you can use the strlen() function
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));   // 26
printf("%d", sizeof(alphabet));   // 27
}