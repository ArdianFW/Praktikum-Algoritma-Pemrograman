/*Nama file : 13_BiayaParkir*/
/*Pembuat   : Ardian Fajar Widyaputra- 24060121140116*/
/*Deskripsi : Menghitung biaya parkir berdasarkan lama parkir*/
/*Tanggal   : Rabu,16 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int i,b;

	//Algoritma
	printf("Membuat Program Biaya Parkir \n");
	printf("Jam lamanya parkir  : ");
	scanf("%d", &i);

	if ( i > 2) {
		b = 2000 + (i-2) * 500 ;
		printf(" Biaya Parkir sebesar: %d", b);
    }
	else{
		b = 2000;
		printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
