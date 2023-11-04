#include <stdio.h>

int main(){

    int a;
    int i = 1;

    while (i <= 5){
        (scanf("%d", &a));{
            if (a >= 20 && a <= 99 || a == 10 ){
                printf("Puluhan\n");
                i++;
            }else if ( a >= 11 && a < 20){
                printf("Belasan\n");
                i++;
            }else if (a > 0 && a <= 9){
                printf("Satuan\n");
                i++;
            }else if (a >= 100 || a < 0){
                printf("Anda Menginput Melebihi Limit Bilangan\n");
                i++;
            }else{
                printf("Nol\n");
                i++;
            }  
        } 
    }
}