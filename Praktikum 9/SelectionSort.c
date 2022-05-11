//Nama File    : SelectionSort.c
//Deskripsi    : Mengurutkan sebuah Array menggunakan selection sort
//Nama         : Ardian Fajar Widyaputra
//NIM          : 24060121140116

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int n)
{
    //kamus Lokal
    int i, j, min, temp;

    //Algoritma
    for(i=0; i<n-1; i++){
    min=i;
    for(j = i+1; j<n; j++){
        if(array[j] < array[min]){
            min = j;
        }
    }
    //Proses SWAP: Untuk menukar posisi elemen
    temp = array[min];
    array[min] = array[i];
    array[i] = temp;
    }
}

int main()
{
    //kamus
    int i , n ;

    //algoritma
    printf("-------------------Selection Sort-------------------\n\n");

        //Input
    printf("Masukkan Jumlah Data: ");
    scanf("%d", &n);
        if(n<=0){
            printf("\n!! Masukan Harus berupa bilangan Positif !!\n");
        }else{
            printf("Masukkan Data: \n");
            int array[n];

            for(i = 0; i<n ;i++){
                printf("Data ke-%d: ", i+1);
                scanf("%d", &array[i]);
            }
            n = sizeof(array)/sizeof(array[0]);

            //Proses
            selectionSort(array, n);

            //Output
            printf("------------------ Hasil Pengurutan ----------------\n");
            printf("Ascending  : ");
            for(i=0; i<n; i++){
                printf("%d ", array[i]);
            }

            printf("\n\n");
            printf("Descending : ");
            for(i=n-1; i>=0; i--){
                printf("%d ", array[i]);
            }
        }
        printf("\n------------------- Terima Kasih -------------------\n");
    return 0;
}
