#ifndef browser_C
#define browser_C
/***********************************/
/* Program   : browser.c */
/* Deskripsi : Realisasi untuk browser */
/* NIM/Nama  : 24060121120012/Emerio Kevin Aryaputra
               24060121140160/Arya Dheffan Shevchenko
*/
/* Tanggal   : 27 November 2022 */
/***********************************/
#include "browser.h"
#include <stdio.h>


void SetOn (address *P) {
/* I.S. : P terdefinisi
   F.S. : situs address P disetel menjadi aktif*/
    // kamus lokal

    // algoritma
        isOn(*P) = true;
}

void SetOff (address *P) {
/* I.S. : List tidak kosong
   F.S. : situs address P disetel menjadi nonaktif*/
    // kamus lokal

    // algoritma
        isOn(*P) = false;
}

void SetOffAll (List *L) {
/* I.S. : List tidak kosong
   F.S. : semua situs disetel menjadi nonaktif*/
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            do {
                SetOff(&P);
                P = next(P);
            } while (P != Nil);
        }
}

void ToNextPage (List *L) {
/* I.S. : List tidak kosong
   F.S. : berpindah ke halaman selanjutnya*/
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            while (!isOn(P)) {
                P = next(P);
            }

            if (next(P) != Nil) {
                isOn(next(P)) = true;
                isOn(P) = false;
            }
        }
}

void ToPrevPage (List *L) {
/* I.S. : List tidak kosong
   F.S. : berpindah ke halaman sebelumnya*/
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            while (!isOn(P)) {
                P = next(P);
            }

            if (prev(P) != Nil) {
                isOn(prev(P)) = true;
                isOn(P) = false;
            }
        }
}

void MenuPage() {
/* I.S. : Tidak terdefinisi 
   F.S. : Tampilan menu opsi yang bisa dilakukan dalam program*/
  
    printf("=============Selamat datang di Web Kecil-Kecilan=============\n");
    printf("\nCommand tersedia: \n");
    printf("a : Masukkan halaman di kiri\n");
    printf("b : Masukkan halaman di kanan\n");
//    printf("c : Insert After\n");
    printf("d : Hapus halaman terkiri\n");
    printf("e : Hapus halaman terkanan\n");
    printf("f : Hapus halaman setelah halaman aktif\n");
    printf("g : Pindah ke halaman selanjutnya\n");
    printf("h : Pindah ke halaman sebelumnya\n");
    printf("l : STOP\n");

    printf("\nWeb yang sedang aktif :\n");
}

#endif // browser_C
