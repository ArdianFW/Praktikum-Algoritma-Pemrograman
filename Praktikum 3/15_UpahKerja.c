/*Nama file : 15_UpahKerja*/
/*Pembuat   : Ardian Fajar Widyaputra- 24060121140116*/
/*Deskripsi : Menghitung upah kerja berdasarkan golongan dan jumlah jam kerja.*/
/*Tanggal   : Rabu,16 Maret 2022*/

#include <stdio.h>

int main(){
    //Kamus
    int g,t,u;

    //Algoritma
    printf("Upah Kerja \n");
    printf("Masukkan golongan antara 1-4 : ");
    scanf("%d", &g);
    printf("Masukkan waktu kerja per minggu : ");
    scanf("%d", &t);
    if ((g==1) && (t>0) && (t<=40)) {
        u = 1000*t;
    }
    else if ((g==1) && (t>40)) {
        u = 1000*40 + (1.5)*1000*(t-40);
    }
    else if ((g==2) && (t>0) && (t<=40)) {
        u = 1500*t;
    }
    else if ((g==2) && (t>40)) {
        u = 1500*40 + (1.5)*1500*(t-40);
    }
    else if ((g==3) && (t>0) && (t<=40)) {
        u = 2000*t;
    }
    else if ((g==3) && (t>40)) {
        u = 2000*40 + 1.5*2000*(t-40);
    }
    else if ((g==4) && (t>0) && (t<=40)) {
        u = 2500*t;
    }
    else if ((g==4) && (t>40)) {
        u = 2500*40 + 1.5*2500*(t-40);
    }
    printf("Upah Kerja sebesar Rp.%d", u);
    return 0;
}
