#include<stdio.h>
int main(){
    // Instead of writing many if..else statements, you can use the switch statement.
    // The switch statement selects one of many code blocks to be executed

    // Syntax
    switch (expression) {
    case x:
    // code block
    break;
    case y:
    // code block
    break;
    default:
    // code block

    // The switch expression is evaluated once
    // The value of the expression is compared with the values of each case
    // If there is a match, the associated block of code is executed
    // The break statement breaks out of the switch block and stops the execution
    // The default statement is optional, and specifies some code to run if there is no case match

    // Example
    int day;
    printf("Enter the day number : ");
    scanf("%d",&day);

    switch (day) {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    // Outputs "Thursday" (day 4)
}
}
}