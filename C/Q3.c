// Q3

#include<stdio.h>
int main(){
    int arr[7] = {20,32,6,7,22,47,21};
    int max = arr[0];
    int min = arr[1];
    
    for(int i = 0; i<7;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("max : %d\n",max);
    
    for(int i = 0; i<7;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("min : %d\n",min);
    return 0;
}