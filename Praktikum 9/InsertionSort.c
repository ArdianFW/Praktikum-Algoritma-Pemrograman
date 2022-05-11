// Nama File    : InsertionSort.c
// Deskripsi    : Mengurutkan sebuah Array menggunakan insertion sort
// Nama         : Ardian Fajar Widyaputra
// NIM          : 24060121140116

#include <stdio.h>
#include "PrintArr.c"

void insertionSort(int arr[], int n) 
{
//Kamus Lokal
    int i, j, key;

//Algoritma
    for (i = 0; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
//Kamus
    int arr[] = {-1, -6, -3, 10, 4, 5, 2, 13, -10, -12, 21, 0, 15, -8, 1};
    int n;

//Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Array sebelum diurutkan = ");
    printArr(arr, n);
    printf("\n");
    printf("Array setelah diurutkan = ");
    insertionSort(arr, n);
    printArr(arr, n);
}
