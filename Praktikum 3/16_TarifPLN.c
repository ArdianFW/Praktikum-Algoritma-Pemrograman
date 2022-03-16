/*Nama file : 17_TarifPLN*/
/*Pembuat   : Ardian Fajar Widyaputra- 24060121140116*/
/*Deskripsi : Menghitung besarnya tarif listrik yang dikenakan berdasarkan golongan dan pemakaian daya listrik.*/
/*Tanggal   : Rabu,16 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int i,g,T;

	//Algoritma
	printf("Membuat Program Tarif PLN \n");
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &i);
	printf("Golongan Tarif  : ");
	scanf("%d", &g);

	if ( i < 100 ) {
		T = g * 1000 * 100;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else if ( i >= 1000 ) {
		T = (g * 1000 * i) * 1.1;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	else {
		T = g * 1000 * i;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
