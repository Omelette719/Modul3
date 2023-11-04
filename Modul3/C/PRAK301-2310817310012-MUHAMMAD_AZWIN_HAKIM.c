#include <stdio.h>

int main(){
    int a1;
    int a2;

    int i = 1;
    
    while (i <= 3){
    (scanf("%d %d", &a1, &a2));
        if (a1 > a2){
            printf("%d %d\n", a2, a1);
            i++;
        }else {
            printf("%d %d\n", a1, a2);
            i++;
        }
    }
}