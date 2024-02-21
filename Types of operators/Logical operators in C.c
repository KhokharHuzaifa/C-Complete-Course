#include<stdio.h>
int main(){
    // You can also test for true or false values with logical operators.
    // Description of operators :
    // && 	Logical and	x < 5 &&  x < 10	Returns 1 if both statements are true
    // || 	Logical or	x < 5 || x < 4	Returns 1 if one of the statements is true
    // !	Logical not	!(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1

    // And operator &&
    int x = 5,y = 3;
    // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
    printf("%d", x > 3 && x < 10);

    // Or operator ||
    // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
    printf("%d", x > 3 || x < 4);

    // Not operator !
    // Returns false (0) because ! (not) is used to reverse the result
    printf("%d", !(x > 3 && x < 10));
}