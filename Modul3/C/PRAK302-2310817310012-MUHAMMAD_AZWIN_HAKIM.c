#include <stdio.h>

int main(){

    int a;
    int i = 1;

    while (i <= 5){
        scanf("%d", &a);
            if (a >= 80){
                printf("A\n");
                i++;
            }else if (a >= 70 && a <= 79){
                printf("B\n");
                i++;
            }else if (a >= 60 && a <= 69){
                printf("C\n");
                i++;
            }else if (a >= 50 && a <= 59){
                printf("D\n");
                i++;
            }else{
                printf("E\n");
                i++;
            }  
         
    }
}