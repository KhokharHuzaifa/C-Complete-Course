#include<stdio.h>
#include<conio.h>
int main(){
    //If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
    //This will declares the variable as "constant", which means unchangeable and read-only
    const int myNum = 15;  // myNum will always be 15
    myNum = 10;  // error: assignment of read-only variable 'myNum'
    const int minutesPerHour = 60;
    const float PI = 3.14;
}
