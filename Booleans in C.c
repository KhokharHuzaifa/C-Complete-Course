#include<stdio.h>
int main(){
    // Booleans represent values that are either true or false
    // 1 (or any other number that is not 0) represents true
    // 0 represents false
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    // Return boolean values
    printf("%d", isProgrammingFun);   // Returns 1 (true)
    printf("%d", isFishTasty);        // Returns 0 (false)
    // bool with comparison
    printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
    printf("%d", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55
}
