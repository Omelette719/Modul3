#include <stdio.h>

int main(){
    int d, jam, menit, sisadetik;

    int i = 1;

    while(i <= 5){
        (scanf("%d", &d));
        
        int jam = d / 3600;
        int sisadetik = d % 3600;
        
        int menit = sisadetik / 60;
        int detik = sisadetik % 60;
        {
            if (24 >= jam > 0){
                printf("%02d:%02d:%02d\n", jam, menit, detik);
                i++;
            }else if(jam == 0 && menit > 0){
                printf("%02d:%02d:%02d\n", jam, menit, detik);
                i++;
            }else if(jam > 24){
                printf("%d hari %02d:%02d:%02d\n", jam / 24, jam % 24, menit, detik);
                i++;
            }
        }
    }
}