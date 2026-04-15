/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Pascal Baihaqi Syarif (13224027)
 *   Nama File           : soal2.c
 *   Deskripsi           : Sebuah program yang menerima T bilangan input n1 n2 ... nT dan melakukan rekursi dengan dua case
 *                         hingga semua bilangan n1 n2 ... nT mengecil menjadi 1. jumlah langkah iterasi rekursi untuk masing
 *                         masing bilangan n akan di outputkan di akhir program
 * 
 */
#include <stdio.h>

int main(){
    int T;
    int n;
    int count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        count = 0;
        while (n > 1)
        {
            if (n%2 == 0)
            {
                n = n/2;
            }
            else if ((n%2 != 0)&&(n>1))
            {
                n = 3*n + 1;
            }

            count = count + 1;
        }
        printf("LANGKAH %d\n", count);
    }
    return 0;
    // Tidak ada referensi yang digunakan
}
