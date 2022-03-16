/*Nama file : 16_TunjanganAnak*/
/*Pembuat   : Ardian Fajar Widyaputra- 24060121140116*/
/*Deskripsi : Menghitung tunjangan berdasarkan gaji pokok dan jumlah anak*/
/*Tanggal   : Rabu,16 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int a,gp,T;

	//Algoritma
	printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%d", &a);
	printf("Gaji Pokok  : ");
	scanf("%d", &gp);

	if ( a < 3) {
		T = a * (0.1*gp);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else{
		T = 3 * (0.1*gp);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
