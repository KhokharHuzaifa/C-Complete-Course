#include<stdio.h>
int main(){
    int marks;
    printf("Enter your Marks: ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100){
        printf("You got A grade");
    }
    else if(marks>=60 && marks<80){
        printf("You got B grade");
    }
    else if(marks>=40 && marks<60){
        printf("You got C grade");
    }
    else if(marks>=32 && marks<40){
        printf("You got D grade");
    }
    else{
        printf("You are Fail");
    }
}
