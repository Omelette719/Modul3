#include <stdio.h>

int main(){

    int N;
    int i = 1;
    
    while (i <= 3){
    (scanf("%d", &N));
        if (N > 0){
            printf("positif\n", N);
            i++;
        }else if (N < 0){
            printf("negatif\n", N);
            i++;
        }else{
            printf("nol\n");
            i++;
        }
    }
}
