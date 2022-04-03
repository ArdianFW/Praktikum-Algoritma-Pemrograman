/*Nama File     : UTS_3 */
/*Deskripsi 	: Menghitung jumlah Sub array*/
/*Nama          : Ardian Fajar Widyaputra */
/*NIM           : 24060121140116 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int N,i,j,Jumlah;
    int* P;
//Algoritma
    printf("----- Besar Penjumlahan Sub Array -----\n");
    printf("Masukkan Banyaknya Elemen : ");
    scanf("%d", &N);

    P = (int*) malloc (N*sizeof(int));

    if (N<=0) {
        printf ("Masukkan integer (N) harus positif");
    }
    else {
        //Memasukkan Elemen Array
        for (i=0; i<N; i++){
            printf("Masukkan Elemen ke-%d : ", i+1);
            scanf("%d", &P[i]);
        }
        //Menampilkan Array yg sudah dimasukkan elemennya
        printf("Array : ");
        for (i=0; i<N; i++){
            printf("%d ", P[i]);
        }
        //Proses Perhitungan Sub array
        Jumlah = 0;
        printf("\nHitung Sub Array : {");
        for (i=0; i<N; i++) {
            Jumlah = Jumlah + P[i];
            //Menampilkan P[i] yg akan dijumlahkan
            if (i==N-1) {
                printf("(%d)", P[i]); //Untuk menambahkan kurung pada penjumlahan nilai terakhir
            }
            else {
                printf("(%d +", P[i]);
            }
            for (j=i+1; j<N; j++){ //Untuk Menghitung elemen selanjutnya
                Jumlah = Jumlah + P[j];
                //Menampilkan P[j] yg akan dijumlahkan
                if (j==N-1) {
                    printf(" %d) + ", P[j]);
                }
                else {
                    printf(" %d +", P[j]);
                }
            }
        }
        printf("}");
        printf("\nJumlah Sub Array adalah "); //Menampilkan hasil penjumlahan sub array
        printf("%d", Jumlah);
    }
}
