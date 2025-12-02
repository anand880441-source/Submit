// Q5


#include<stdio.h>

void factorial(int num, int fact){
    
    if(num == 0){
        printf("%d",fact);
        return;
    }
    
    fact = fact*num;
    factorial(num - 1, fact);
}

int main(){
    int num = 5;
    int fact = 1;
    factorial(num,fact);
    return 0;
}