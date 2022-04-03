/*Nama File     : UTS_2 */
/*Deskripsi 	: Menghitung selisih antara jalur tertinggi dan terendah yang dilalui pak Kentos */
/*Nama          : Ardian Fajar Widyaputra */
/*NIM           : 24060121140116 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
//Kamus
    int N,i,max,min,Selisih;
    int* P;
//Algoritma
    printf("----- Selisih Terbesar Jalur Lintasan ----- \n");
    printf("Masukkan banyak lintasan : ");
    scanf("%d", &N);

    P = (int*) malloc (N* sizeof(int));

    if (N<=0) {
        printf("Banyak lintasan (N) harus positif");
    }
    else {
        //Menambahkan ketinggian jalur lintasan
        for (i=0; i<N; i++) {
            printf("Masukkan jalur lintasan ke-%d : ", i+1);
            scanf("%d", &P[i]);
        }
        //Menampilkan ketinggian jalur lintasan yg sudah dimasukkan
        printf("Jalur lintasan pak Kentos: ");
        for (i=0; i<N; i++) {
            printf("%d ", P[i]);
        }
        printf("\nJalur tertinggi : "); //Mencari jalur tertinggi
        max = P[0];
        for (i=0; i<N; i++) {
            if (P[i]>=max) {
                max = P[i];
            }
        }
        printf("%d", max); //Menampilkan jalur tertinggi

        printf("\nJalur terendah : "); //Mencari jalur terendah
        min = P[0];
        for (i=0; i<N; i++) {
            if (P[i]<=min) {
                min = P[i];
            }
        }
        printf("%d", min); //Menampilkan jalur terendah

        //Menghitung selisih jalur tertinggi dan terendah
        printf("\nSelisih antara Jalur Tertinggi dan Terendah => %d - %d = ", max,min);
        Selisih = (max - min) ;
        printf("%d", Selisih);//Menampilkan hasil selisih jalur tertinggi dan terendah
    }
    return 0;
}
