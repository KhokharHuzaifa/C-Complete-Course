#include<stdio.h>
int main(){
    // Example
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
// Example Explained
// The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the 
// array elements with the for loop.
// When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.
}