/* Nama File    : main.c */
/* Nama Pembuat : Ardian Fajar Widyaputra */
/* NIM          : 24060121140116 */
/* Lab          : B1 */
/* Deskripsi    : Mencari harga X dalam Tabel T [ 1...N ] melalui metode/algoritma binary search tree mulai dari T[1] */


#include "BinSearch.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Kamus
    int T[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int X=9;
    int n=sizeof(T)/sizeof(T[0]);
    int ix;

    //Algoritma
    BinSearch(T,n,X,&ix);
    (ix==-1)
        ? printf("Elemen tidak berada di array")
        : printf("Elemen berada di index ke-%i", ix);
    return 0;
}
