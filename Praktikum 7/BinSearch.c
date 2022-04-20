/* Nama File    : BinSearch.c */
/* Nama Pembuat : Ardian Fajar Widyaputra */
/* NIM          : 24060121140116 */
/* Lab          : B1 */
/* Deskripsi    : Mencari harga X dalam Tabel T [ 1...N ] melalui metode/algoritma binary search tree mulai dari T[1] */

#include "BinSearch.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void BinSearch(int T[], int N, int X, int *IX){
    //Kamus Lokal
    int upper, mid, lower;

    //Algoritma
    upper=N-1;
    lower=0;
    mid=(upper+lower)/2;

    while((X!=T[mid])&& (lower<upper)){
        if (X>T[mid]){
            lower=mid+1;
        }else{
            upper=mid-1;
        }
        mid=(upper+lower)/2;
    }
    if(X==T[mid]){
        *IX=mid;
    }else{
        *IX=-1;
    }
}
