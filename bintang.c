#include <stdio.h>
main(){
	int bintang, i, j;
	
	printf("Masukkan Bintang Yang Anda Mau : ");
	scanf("%d", &bintang);
	
            for(i=1; bintang>=i; bintang--){ 
                for(j=bintang; j>=i; j--){
                    printf("*");
                }
                printf("\n");
            }
}
