// Q2

#include<stdio.h>
int main(){
    int num1 = 101;
    int num2 = 205;
    
    printf("Actual Number1 is %d\n",num1);
    printf("Actual number2 is %d\n",num2);
    
    num1 = num1+num2; 
    num2 = num1-num2;
    num1 = num1-num2;
    
    printf("Swaped number1 is %d\n",num1);
    printf("Swaped number2 is %d\n",num2);
    
    return 0;
}