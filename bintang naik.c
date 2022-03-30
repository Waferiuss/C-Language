#include <stdio.h>
main(){
	int bintang, i, j;
	
	printf("Masukkan Bintang Yang Anda Mau : ");
	scanf("%d", &bintang);
	
            for(i=1; i<=bintang; i++){ 
                for(j=1; j<=i; j++){
                    printf("*");
                }
                printf("\n");
            }
}
