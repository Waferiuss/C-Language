#include <stdio.h>
main(){
	int angka, i;
	
	printf("Masukkan Banyak Angka : ");
	scanf("%d", &angka);
	
	for(i = 1; i <= angka; i++){
		printf("%d\n", i);
	}
}
